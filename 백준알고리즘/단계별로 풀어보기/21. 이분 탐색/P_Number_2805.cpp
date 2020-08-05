#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;

ll n, m;
vector<ll> h;

void solve(){
  int s = 0, e = h[h.size()-1];
  int ans = 0;
  while(s<=e){
    int mid = (s+e)/2;
    ll count = 0;
    for(int i = 0; i<h.size(); i++){
      if(h[i] - mid <= 0) continue;
      else count += h[i] - mid;
    }
    if(count>=m){
      ans = max(ans, mid);
      s = mid +1;
    }
    else{
      e = mid -1;
    }
  }
  cout<<ans;
}

int main() {
  cin>>n>>m;
  for(int i = 0 ; i<n; i++){
    int tmp;
    cin>>tmp;
    h.push_back(tmp);
  }
  sort(h.begin(), h.end());
  solve();
  return 0;
}
