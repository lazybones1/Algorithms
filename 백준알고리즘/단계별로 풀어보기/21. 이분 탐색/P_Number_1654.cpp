#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;

ll n, k;
vector<int> v;

void solve(int max){
  ll s= 1, e = max;
  ll ans = 1;
  while(s<=e){
    ll count = 0;
    ll mid = (s+e)/2;

    for(int i = 0; i < v.size(); i++){
      count+=(v[i] / mid);
    }

    if(count >= n){
      ans = std::max(ans, mid);
      s = mid + 1;
    }
    else {
      e = mid - 1;
    }
  }
  cout<<ans;
  return;
}

int main() {
  cin>>k>>n;
  ll sum = 0;
  for(int i = 0; i<k; i++){
    int tmp;
    cin>>tmp;
    sum+=tmp;
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());
  int max = sum / n;
  solve(max);
  return 0;
}
