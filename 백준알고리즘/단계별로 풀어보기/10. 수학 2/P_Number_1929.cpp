#include <iostream>
using namespace std;

int main() {
  int m, n;
  cin>>m>>n;
  int* arr = new int[n+1];

  arr[1] = 1;
  for(int i = 2; i<=n; i++){
    if(arr[i] != 0) continue;
    for(int j = i+i; j<=n; j += i){
      arr[j] = 1;
    }
  }

  for(int i = m; i<=n; i++){
    if(arr[i] == 0) cout<<i<<"\n";
  }

  return 0;
}
