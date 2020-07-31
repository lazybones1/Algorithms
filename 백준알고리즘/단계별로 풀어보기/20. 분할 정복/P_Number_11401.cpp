#include <iostream>
using namespace std;

long long fac[4000001], n, k, inv[4000001];
long long power(long long x, long long y){
  long long ret = 1;
  while(y>0){
    if(y%2){
      ret *=x;
      ret %= 1000000007;
    }
    x *= x;
    x %= 1000000007;
    y /=2;
  }
  return ret;
}

int main() {
  fac[1] = 1;
  for(int i =2; i<=4000000; i++)
    fac[i] = (fac[i-1] * i) % 1000000007;
  inv[4000000] = power(fac[4000000], 1000000007-2);
  for(int i = 4000000 -1; i>0; i--)
    inv[i] = (inv[i+1]*(i+1))% 1000000007;

  cin>>n>>k;
  if(n==k || !k){
    cout<<"1";
    return 0;
  }
  long long r = (fac[n] * inv[n-k]) % 1000000007;
  r = (r*inv[k]) % 1000000007;
  cout<<r<<"\n";
  return 0;
}
