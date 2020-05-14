#include <iostream>
using namespace std;

int findSelf(int n){
  int self = n;
  while(1){
    if(n == 0) break;
    self+=n%10;
    n=n/10;
  }

  return self;
}

int main() {
  int arr[10001] = {0};
  for(int i = 1; i<=10000; i++){
    int tmp = findSelf(i);
    if(tmp<10001) arr[tmp]++;
  }
  for(int i = 1; i<=10000; i++){
    if(arr[i] == 0) cout<<i<<endl;
  }
  return 0;
}
