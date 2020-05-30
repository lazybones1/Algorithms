#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin>>n;
  int decomposition;
  for(int i = 1; i<n; i++){
    decomposition = i;
    int tmp = i;
    while(tmp > 0){
      decomposition += tmp%10;
      tmp /=10;
    }
    if(decomposition == n){
      cout<<i;
      return 0;
    }
  }
  cout<<0;
  return 0;
}
