#include <iostream>
using namespace std;

int main() {
  unsigned int n;
  cin>>n;
  int ans = 1;
  for(int i = 0; i<n; i++){
    ans+=i*6;
    if(ans>=n) {
      cout<<i+1;
      return 0;
    }
  }
  return 0;
}
