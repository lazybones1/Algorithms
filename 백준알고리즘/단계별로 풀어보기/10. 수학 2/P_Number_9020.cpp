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

void find(int n){
  int small = n/2, big = n/2;
  while(1){
    if(!isPrime(small)){
      while(!isPrime(small)){
        small--;
      }
    }
    if(!isPrime(big)){
      while(!isPrime(big)){
        big++;
      }
    }
    if(small + big == n){
      cout<<small<<" "<<big<<"\n";
      return;
    }
    else if(small + big > n){
      small--;
    }
    else if(small + big <n){
      big++;
    }
  }
}

int main() {
  int t;
  cin>>t;
  for(int i = 0; i<t; i++){
    int n;
    cin>>n;
    find(n);
  }
  return 0;
}
