#include <iostream>
#include <algorithm>
using namespace std;

int n;
int vine[10003];
long long dp[10003];

void find(){
  for(int i = 0; i<=n; i++){
    if(i==0){
      dp[i] = 0;
    }
    else if(i==1){
      dp[i] = vine[i];
    }
    else if(i==2){
      dp[i] = dp[i-1] + vine[i];
    }
    else{
      dp[i] = max(dp[i-3]+vine[i-1], dp[i-2]) + vine[i];
      dp[i] = max(dp[i], dp[i-1]);
    }
  }
  sort(dp, dp+n);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin>>n;
  for(int i = 1; i<=n; i++){
    cin>>vine[i];
  }
  find();
  cout<<dp[n];
  return 0;
}
