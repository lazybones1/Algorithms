#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, c;
vector<int> v;

void solve(){
  int s=1, e=v.back();
  int ans = -1;
  while(s<=e){
    int mid = (s+e)/2;
    int before = 0;
    int count = 1;

    for(int i = 1; i<n; i++){
      if(v[i]  >= mid + v[before]){
        before = i;
        count++;
      }
    }
    if(count >=c ) s = mid+1;
    else e = mid -1;
    if(ans < mid && count>=c) ans = mid;
  }
  cout<<ans;
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);

  cin>>n>>c;
  for(int i = 0; i<n; i++){
    int tmp;
    cin>>tmp;
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());
  solve();
  return 0;
}
