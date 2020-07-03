#include <iostream>
#include <algorithm>
using namespace std;

int n;
int dp[1001];
int arr[1001];

void lis(){
  for(int i = 0; i<n; i++){
    if(i==0){
      dp[i] = 1;
    }
    else{
      dp[i] = 0;
      for(int j = i; j>=0; j--){
        if(arr[i]>arr[j]){
          dp[i] = max(dp[i], dp[j]);
        }
      }
      dp[i]++;
    }
  }
  sort(dp, dp+n);
  cout<<dp[n-1];
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
