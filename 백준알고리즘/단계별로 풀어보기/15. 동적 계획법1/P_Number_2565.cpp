#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<pair<int, int>> v;
int dp[101];
int maxN = 0;

bool comp(pair<int, int> a,pair<int, int> b){
  return a.first < b.first;
}

void ans(){
  sort(v.begin(), v.end(), comp);
  for(int i = 1; i<n; i++){
    for(int j = i; j>=0; j--){
      if(v[i].second>v[j].second && dp[i] <= dp[j]) dp[i] = dp[j]+1;
    }
  }
  for(int i = 0; i<n; i++){
    maxN = max(maxN, dp[i]);
  }
  cout<<n-maxN;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin>>n;
  for(int i = 0; i<n; i++){
    int a,b;
    cin>>a>>b;
    v.push_back(make_pair(a, b));
  }
  fill_n(dp, n, 1);
  ans();
  return 0;
}
