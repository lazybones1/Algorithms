#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);
  vector<int> v;
  vector<int>::iterator low;
  vector<int>::iterator high;
  int n, m;
  cin>>n;
  for(int i = 0; i<n; i++){
    int tmp;
    cin>>tmp;
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());
  cin>>m;
  for(int i = 0; i<m; i++){
    int want;
    cin>>want;
    low = lower_bound(v.begin(), v.end(), want);
    high = lower_bound(v.begin(), v.end(), want+1);
    cout<<high - low<<" ";
  }
  return 0;
}
