class Solution {
public:
    bool check(int i, int j, int row, int col) {
        return 0 <= i && i < row && 0 <= j && j < col;
    }

    bool dfs(vector<vector<char>>& board, vector<vector<bool>>& visited, string& word, int index, int row, int col, int x, int y, int n) {
        if (index == n) {
            return true;
        }

        if (!check(x, y, row, col) || visited[x][y] || board[x][y] != word[index]) {
            return false;
        }

        visited[x][y] = true;

        vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        for (auto d : dir) {
            int new_x = x + d.first;
            int new_y = y + d.second;
            if (dfs(board, visited, word, index + 1, row, col, new_x, new_y, n)) {
                return true;
            }
        }

        visited[x][y] = false;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();
        int n = word.length();
        vector<vector<bool>> visited(row, vector<bool>(col, false));

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (dfs(board, visited, word, 0, row, col, i, j, n)) {
                    return true;
                }
            }
        }

        return false;
    }
};
