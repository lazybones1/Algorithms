#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int tmp){
  if(tmp == 1) return false;
  int n = sqrt(tmp);
  for(int i = 2; i<=n; i++){
    if(tmp%i == 0){
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin>>n;
  int cnt = 0;
  fill_n(arr, 1000, 0);
  for(int i = 0; i<n; i++){
    int tmp;
    cin>>tmp;
    if(isPrime(tmp)) cnt++;
  }
  cout<<cnt;

  return 0;
}
