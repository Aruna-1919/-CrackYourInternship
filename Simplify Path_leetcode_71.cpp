class Solution {
public:
    string simplifyPath(string path) {
        stack<string> sta;
        stringstream ss(path);
        
        string temp;

        while (getline(ss, temp, '/')) {
            if (temp == "" || temp == ".") {
                continue;
            } else if (temp == "..") {
                if (!sta.empty()) {
                    sta.pop();
                }
            } else {
                sta.push(temp);
            }
        }

        string ans = "";
        while (!sta.empty()) {
            ans = "/" + sta.top() + ans;
            sta.pop();
        }

        return ans.empty() ? "/" : ans;
    }
};
