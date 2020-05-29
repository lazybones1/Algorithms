#include <iostream>
using namespace std;

int fibo(int n, int preprevious, int previous){
  if(n == 2) return previous + preprevious;
  return fibo(n-1, previous, previous + preprevious);
}

int main() {
  int n;
  cin>>n;
  if(n == 0) cout<< 0;
  else if(n==1) cout<< 1;
  else cout<<fibo(n, 0, 1);
  return 0;
}
