#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstdlib>

class RandomizedCollection {
private:
    std::vector<int> values;
    std::unordered_map<int, std::unordered_set<int>> index_map;

public:
    RandomizedCollection() {}

    bool insert(int val) {
        values.push_back(val);
        index_map[val].insert(values.size() - 1);
        // Return true if this was the first insertion of val
        return index_map[val].size() == 1;
    }

    bool remove(int val) {
        if (index_map[val].empty()) return false;

        int remove_idx = *(index_map[val].begin());
        index_map[val].erase(remove_idx);

        int last_val = values.back();
        values[remove_idx] = last_val;
        index_map[last_val].erase(values.size() - 1);
        if (remove_idx < values.size() - 1) {
            index_map[last_val].insert(remove_idx);
        }

        values.pop_back();
        if (index_map[val].empty()) {
            index_map.erase(val);
        }

        return true;
    }

    int getRandom() {
        return values[rand() % values.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
