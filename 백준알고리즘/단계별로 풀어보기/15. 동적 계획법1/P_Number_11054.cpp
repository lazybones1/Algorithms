#include <iostream>
#include <algorithm>
using namespace std;

int n;
int dp[1001][2];
int ans[1001];
int arr[1001];

void lis(){
  for(int i = 0; i<n; i++){
    ans[i] = 1;
    bool flag = false;
    for(int j = i; j>=0; j--){
      if(arr[i]>arr[j]){
        dp[i][0] = max(dp[i][0], dp[j][0]);
        flag= true;
      }
    }
    if(flag) dp[i][0]++;
    ans[i] += dp[i][0];
  }
  for(int i = n-1; i>=0; i--){
    bool flag = false;
    for(int j = i; j<n; j++){
      if(arr[i] > arr[j]){
        dp[i][1] = max(dp[i][1], dp[j][1]);
        flag = true;
      }
    }
    if(flag) dp[i][1]++;
    ans[i] += dp[i][1];
  }
  sort(ans, ans+n);
  cout<<ans[n-1];
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);

  cin>>n;
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  lis();
  return 0;
}
