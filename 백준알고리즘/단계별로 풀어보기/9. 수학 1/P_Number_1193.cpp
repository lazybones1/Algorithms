#include <iostream>
using namespace std;

int main() {
  int x;
  cin>>x;
  int ans = 0;
  int i = 1;
  while(ans+i<x){
    ans+=i;
    i++;
  }
  int a;
  if(i % 2 == 0){
    a = x - ans;
  }
  else a = i + 1 - (x - ans);
  int b = i + 1 - a;
  cout<<a<<"/"<<b;
  return 0;
}
