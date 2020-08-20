#include <iostream>
#include <algorithm>
#include <memory.h>
using namespace std;

int m, n;
int map[501][501];
int ans[501][501];

int solve(int x, int y){
  if(ans[x][y] != -1) return ans[x][y];
  if(x<0 || x>=m || y<0 || y>=n) return 0;
  if(x==0 && y == 0) return 1;

  ans[x][y] = 0;
  if(map[x+1][y] > map[x][y]){
    ans[x][y] += solve(x+1, y);
  }
  if(map[x][y+1] > map[x][y]){
    ans[x][y] += solve(x, y+1);
  }
  if(map[x-1][y] > map[x][y]){
    ans[x][y] += solve(x-1, y);
  }
  if(map[x][y-1] > map[x][y]){
    ans[x][y] += solve(x, y-1);
  }
  return ans[x][y];
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  cin>>m>>n;
  for(int x = 0; x<m; x++){
    for(int y = 0; y<n; y++){
      cin>>map[x][y];
    }
  }
  memset(ans, -1, sizeof(ans));
  cout<<solve(m-1,n-1);
  return 0;
}
