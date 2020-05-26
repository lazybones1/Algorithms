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
  int m, n;
  cin>>m>>n;
  int minPrime, sumPrime = 0, cnt = 0;
  for(int i = m; i<=n; i++){
    if(isPrime(i)) {
      if(cnt == 0){
        minPrime = i;
      }
      else{
        minPrime = min(minPrime, i);
      }
      sumPrime += i;
      cnt++;
    }
  }
  if(cnt == 0) cout<<-1<<endl;
  else cout<<sumPrime<<"\n"<<minPrime<<endl;
  return 0;
}
