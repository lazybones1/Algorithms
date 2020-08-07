#include <iostream>
#include <vector>
using namespace std;

int n, k;

void solve(){
  int s = 1, e = k;
  int ans = -1;
  while(s<=e){
    int cnt = 0;
    int mid = (s+e)/2;
    for(int i = 1; i<=n; i++){
      cnt+=min(mid/i, n);
    }
    if(cnt >= k){
      e = mid -1;
      ans = mid;
    }
    else s = mid +1;
  }
  cout<<ans;
  return;
}

int main() {
  cin>>n>>k;
  solve();
  return 0;
}
