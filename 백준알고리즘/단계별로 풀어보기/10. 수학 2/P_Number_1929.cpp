#include <iostream>
#include <cmath>
using namespace std;

void isPrime(int n, int arr[]){
  arr[1] = 1;
  for(int i = 2; i<=n; i++){
    if(arr[i] == 0){
      for(int j = i+i; j<=n; j += i){
        arr[j] = 1;
      }
    }
  }
}

int main() {
  int m, n;
  cin>>m>>n;
  int arr[1000000];
  fill_n(arr, n, 0);
  isPrime(n, arr);
  for(int i = m; i<=n; i++){
    if(arr[i] == 0) cout<<i<<endl;
  }

  return 0;
}
