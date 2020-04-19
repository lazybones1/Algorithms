//다른사람 코드 참조함
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
      int x = grid.size();
      int y = grid[0].size();
      vector<vector<int>> newgrid(x,vector<int>(y,0));
      newgrid[0][0] = grid[0][0];
      for(int i=1;i<x;i++)
        newgrid[i][0] = newgrid[i-1][0] + grid[i][0];
      for(int j=1;j<y;j++)
        newgrid[0][j] = newgrid[0][j-1] + grid[0][j];
      for(int i=1;i<x;i++)
        for(int j=1;j<y;j++)
            newgrid[i][j] = min(newgrid[i-1][j],newgrid[i][j-1]) + grid[i][j];
      return newgrid[x-1][y-1];
    }
};
