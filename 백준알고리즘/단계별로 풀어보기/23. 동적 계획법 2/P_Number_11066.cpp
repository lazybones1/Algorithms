#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int dp[501][501];
int sum[501];
int cost[501];

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int t;
  cin>>t;
  for(int j = 0; j<t; j++){
    int k;
    cin>>k;
    for(int i = 1; i<=k; i++){
      cin>>cost[i];
      sum[i] = sum[i-1] + cost[i];
    }
    for(int d = 1; d<k; d++){
      for(int x = 1; x + d <=k; x++){
        int y = x +d;
        dp[x][y] = INT_MAX;
        for(int i = x; i<y; i++){
          dp[x][y] = min(dp[x][y], dp[x][i]+dp[i+1][y] + sum[y]-sum[x-1]);
        }
      }
    }
    cout<<dp[1][k]<<"\n";
  }
  return 0;
}
