#include <iostream>
using namespace std;

int n, k;
int v[11];

int greedy(){
  int cnt=0;
  int kcopy = k;
  for(int i = n-1; i>=0; i--){
    if(kcopy == 0) break;
    if(kcopy>=v[i]){
      cnt+= kcopy/v[i];
      kcopy %= v[i];
    }
  }
  return cnt;
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  cin>>n>>k;
  for(int i = 0; i<n; i++){
    cin>>v[i];
  }
  cout<<greedy();
  return 0;
}
