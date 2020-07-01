#include <iostream>
using namespace std;

int n;
long long dp[101][10];

int find(){
  long long ans = 0;
  for(int i = 1; i<=n; i++){
    if(i==1){
      dp[i][0] = 0;
      for(int j = 1; j<10; j++){
        dp[i][j] = 1;
      }
    }
    else{
      dp[i][0] = dp[i-1][1]%1000000000;
      dp[i][9] = dp[i-1][8]%1000000000;
      for(int j = 1; j<9; j++){
        dp[i][j] = (dp[i-1][j+1] + dp[i-1][j-1])%1000000000;
      }
    }
  }
  for(int i = 0; i<10; i++){
    ans+= dp[n][i];
  }
  return ans%1000000000;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


  cin>>n;
  cout<<find();

  return 0;
}
