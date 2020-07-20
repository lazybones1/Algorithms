#include <iostream>
using namespace std;

long long dp[1001][1001];

void ans(int n){
  for(int i = 1; i<=n; i++){
    for(int j = 0; j<=i; j++){
      if(j == 0 || i==j){
        dp[i][j] = 1;
      }
      else{
        dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%10007;
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int n, k;
  cin>>n>>k;
  ans(n);
  cout<<dp[n][k];
  return 0;
}
