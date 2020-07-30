#include <iostream>
#include <cmath>
using namespace std;

long long solve(long long a, long long b, long long c){
  if(b==0){
    return 1;
  }
  else if(b==1){
    return a;
  }
  if(b%2 == 1){
    return solve(a, b-1, c)*a;
  }
  long long half = solve(a, b/2, c);
  half %= c;
  return (half*half)%c;
}

int main() {
  long long a, b, c;
  cin>>a>>b>>c;
  cout<<solve(a, b, c)%c;
  return 0;
}
