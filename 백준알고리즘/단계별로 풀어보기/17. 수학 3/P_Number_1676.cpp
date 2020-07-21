#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin>>n;
  int two=0, five=0;
  for(int i = 1; i<=n; i++){
    int tmp = i;
    while(tmp%2 == 0 || tmp%5 == 0){
      if(tmp%2 == 0){
        two++;
        tmp/=2;
      }
      if(tmp%5 == 0){
        five++;
        tmp/=5;
      }
    }
  }
  int ans = min(two, five);
  cout<<ans;
  return 0;
}
