class Solution {
public:
    int visited[1000][1000] = {0};
    void find(vector<vector<char>>& grid, int x, int y){
        visited[x][y] = 1;
        if(y+1<grid[x].size()){
            if(grid[x][y+1] == '1' && visited[x][y+1] != 1 ){
                find(grid, x, y+1);
            }
        }
        if(y-1>=0){
            if(grid[x][y-1] == '1' && visited[x][y-1] != 1 ){
                find(grid, x, y-1);
            }
        }
        if(x+1<grid.size()){
            if(grid[x+1][y] == '1' && visited[x+1][y] != 1 ){
                find(grid, x+1, y);
            }
        }
        if(x-1>=0){
            if(grid[x-1][y] == '1' && visited[x-1][y] != 1 ){
                find(grid, x-1, y);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int answer = 0;
        for(int x = 0; x<grid.size(); x++){
            for(int y=0; y<grid[x].size(); y++){
                if(visited[x][y] != 1 && grid[x][y] == '1'){
                    find(grid, x, y);
                    answer++;
                }
                else continue;
            }
        }
        return answer;
    }
};
