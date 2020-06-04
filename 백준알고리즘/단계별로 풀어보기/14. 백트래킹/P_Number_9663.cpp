#include <iostream>
using namespace std;
int N;
int col[15];
int ans = 0;

bool promising(int i){
  for(int j=0;j<i;j++) {
    if(col[j] == col[i] || abs(col[i]-col[j]) == (i-j))
      return false;
  }
  return true;
}
void solve(int i){
  if(i == N)
    ans += 1;
  else{
    for(int j=0;j<N;j++){
      col[i] = j;
      if(promising(i))
        solve(i+1);
    }
  }
}

int main(){
  cin>>N;
  solve(0);
  cout<<ans<<endl;
  return 0;
}
