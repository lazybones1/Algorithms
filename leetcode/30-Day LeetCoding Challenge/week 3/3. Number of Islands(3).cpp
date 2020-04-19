class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        stack<pair<int, int>> stack;

        for(int i = 0; i < grid.size(); ++i) {
            for(int j = 0; j < grid[i].size(); ++j) {
                if(grid[i][j] != '1') continue;
                ++islands;
                stack.push(pair<int, int>(i, j));
                while(!stack.empty()) {
                    auto cur = stack.top();
                    stack.pop();
                    grid[cur.first][cur.second] = '2';
                    if (cur.second - 1 >= 0 && grid[cur.first][cur.second - 1] == '1') {
                        stack.push(pair<int, int>(cur.first, cur.second - 1));
                    }
                    if (cur.second + 1 < grid[cur.first].size() && grid[cur.first][cur.second + 1] == '1') {
                        stack.push(pair<int, int>(cur.first, cur.second + 1));
                    }
                    if (cur.first - 1 >= 0 && grid[cur.first - 1][cur.second] == '1') {
                        stack.push(pair<int, int>(cur.first - 1, cur.second));
                    }
                    if (cur.first + 1 < grid.size() && grid[cur.first + 1][cur.second] == '1') {
                        stack.push(pair<int, int>(cur.first + 1, cur.second));
                    }
                }
            }
        }
        return islands;
    }
};
