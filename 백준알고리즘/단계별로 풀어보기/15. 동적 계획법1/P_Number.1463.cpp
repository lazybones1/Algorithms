#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000000];

void find(int n){
  for(int i = 0; i<=n; i++){
    if(i==1){
      dp[i] = 0;
    }
    else if(i==2){
      dp[i] = 1;
    }
    else if(i==3){
      dp[i] = 1;
    }
    else{
      int tmp[3] = {std::numeric_limits<int>::max(), std::numeric_limits<int>::max(), std::numeric_limits<int>::max()};
      if(i%3==0){
        tmp[2] = dp[i/3] +1;
      }
      if(i%2==0){
        tmp[1] = dp[i/2] +1;
      }
      tmp[0] = dp[i-1] +1;
      sort(tmp, tmp+3);
      dp[i] = tmp[0];
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);

  int n;
  cin>>n;
  find(n);

  cout<<dp[n];
  return 0;
}
