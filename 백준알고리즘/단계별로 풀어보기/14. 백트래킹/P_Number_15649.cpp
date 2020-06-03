#include <iostream>
#include <vector>
using namespace std;

bool visited[9];
vector<int> v;

void solve(int n, int m){
  if(m==0){
    for(int i = 0; i<v.size(); i++){
      cout<<v[i]<<" ";
    }
    cout<<"\n";
  }
  for(int i = 1; i<=n; i++){
    if(visited[i]) continue;
    visited[i] = true;
    v.push_back(i);
    solve(n, m-1);
    visited[i] = false;
    v.pop_back();
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin>>n>>m;
  solve(n, m);
}
