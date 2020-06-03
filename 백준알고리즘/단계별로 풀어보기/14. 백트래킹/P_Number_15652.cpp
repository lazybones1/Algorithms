#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void solve(int index, int n, int m){
  if(m==0){
    for(int i = 0; i<v.size(); i++){
      cout<<v[i]<<" ";
    }
    cout<<"\n";
    return ;
  }
  for(int i = index; i<=n; i++){
    v.push_back(i);
    solve(i, n, m-1);
    v.pop_back();
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin>>n>>m;
  solve(1, n, m);

  return 0;
}
