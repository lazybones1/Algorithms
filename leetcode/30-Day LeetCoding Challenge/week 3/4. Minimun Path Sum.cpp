//Time Limit Exceeded
class Solution {
public:
    int answer = INT_MAX;
    void find(vector<vector<int>>& grid, int x, int y,int sum){
        if(answer<sum) return;
        sum += grid[x][y];
        if(x+1 < grid.size()){
            find(grid, x+1, y, sum);
        }
        if(y+1 < grid[x].size()){
            find(grid, x, y+1, sum);
        }
        if(x==grid.size()-1 && y==grid[x].size()-1){
            answer = std::min(answer, sum);
            return;
        }
    }
    int minPathSum(vector<vector<int>>& grid) {
        find(grid, 0,0,0);
        cout<<grid.size()<<" "<<grid[0].size();
        return answer;
    }
};
