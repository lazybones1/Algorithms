#include <iostream>
#include <cmath>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int a, b;
  cin>>a>>b;
  long long ans[2] = {1,1};
  int big = max(a,b);
  for(int i = 2; i<=big; i++){
    while(a%i == 0 && b%i==0){
      ans[0]*=i;
      ans[1]*=i;
      a/=i;
      b/=i;
    }
  }
  ans[1] *= a * b;
  cout<<ans[0]<<"\n"<<ans[1];
  return 0;
}
