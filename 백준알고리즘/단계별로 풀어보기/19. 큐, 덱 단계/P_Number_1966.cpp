#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

bool cmp(int a, int b){
  return a>b;
}

int main() {
  int t;
  cin>>t;
  for(int i = 0; i<t; i++){
    int n, m;
    int ans = 0;
    cin>>n>>m;
    queue<pair<int, int>> q;
    int ord[101];
    for(int j=0; j<n; j++){
      int prior;
      cin>> prior;
      q.push(make_pair(j, prior));
      ord[j] = prior;
    }
    sort(ord, ord + n, cmp);
    while(1){
      if(q.front().second == ord[ans]){
        if(q.front().first == m) break;
        q.pop();
        ans++;
      }
      else{
        q.push(q.front());
        q.pop();
      }
    }
    cout<<ans+1<<"\n";
  }
  return 0;
}
