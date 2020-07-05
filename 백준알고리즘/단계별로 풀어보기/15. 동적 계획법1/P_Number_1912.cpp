#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100001];
int dp[100001];

void ans(){
  for(int i = 0; i<n; i++){
    if(i==0){
      dp[i] = arr[i];
    }
    else{
      if(arr[i]<0){
        dp[i] = max(arr[i], dp[i-1]+arr[i]);
      }
      else{
        dp[i] = max(dp[i-1]+arr[i], arr[i]);
      }
    }
  }
  sort(dp, dp+n);
  cout<<dp[n-1];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin>>n;
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }

  ans();
  return 0;
}
