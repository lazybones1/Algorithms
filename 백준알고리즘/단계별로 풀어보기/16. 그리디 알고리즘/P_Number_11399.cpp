#include <iostream>
#include <algorithm>
using namespace std;

int n;
int waitingTime[1001];

int greedy(){
  sort(waitingTime, waitingTime+n);
  int t=0;
  int ans = 0;
  for(int i = 0; i<n; i++){
    t = t + waitingTime[i];
    ans+= t;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  cin>>n;
  for(int i = 0; i<n; i++){
    cin>>waitingTime[i];
  }

  cout<<greedy();
  return 0;
}
