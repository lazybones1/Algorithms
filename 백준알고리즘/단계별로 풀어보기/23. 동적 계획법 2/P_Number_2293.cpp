#include <iostream>

using namespace std;

int dp[10001] = {0};
int coin[101];

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int n, k;
  cin>>n>>k;

  for(int i = 1; i<=n; i++){
    cin>>coin[i];
  }

  dp[0] = 1;

  for(int x = 1; x<=n; x++){
    for(int y = 1; y<=k; y++){
      if(y>=coin[x]) dp[y] += dp[y-coin[x]];
    }
  }
  cout<<dp[k];
  return 0;
}
