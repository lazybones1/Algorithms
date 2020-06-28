#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int n;
int map[21][21];
int visited[21];
int ans = std::numeric_limits<int>::max();

void dfs(int index, int first){
  if(index == n/2){
    vector<int> team_link, team_start;
    for (int i = 0; i < n; i++){
      if (visited[i]) team_start.push_back(i);
      else team_link.push_back(i);
    }
    int stat_start = 0, stat_link = 0;
    for (int i = 0; i < team_start.size(); i++){
      for (int j = i+1; j < team_start.size(); j++){
        int start_x = team_start[i], start_y = team_start[j];
        int link_x = team_link[i], link_y = team_link[j];
        stat_start += map[start_x][start_y] + map[start_y][start_x];
        stat_link += map[link_x][link_y] + map[link_y][link_x];
      }
    }
    ans = min(ans, abs(stat_start - stat_link));
    return;
  }
  for(int i = first; i<n; i++){
    if(visited[i] == 1){
      continue;
    }
    visited[i] = 1;
    dfs(index+1, i);
    visited[i] = 0;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin>>n;
  for(int x = 0; x<n; x++){
    for(int y = 0; y<n; y++){
      cin>>map[x][y];
    }
  }
  dfs(0,0);
  cout<<ans;
  return 0;
}
