#include <iostream>
using namespace std;

int main() {
  int* arr = new int[123456*2];
  arr[1] = 1;
  for(int i = 2; i<=123456*2; i++){
    if(arr[i] != 0) continue;
    for(int j = i+i; j<=123456*2; j += i){
      arr[j] = 1;
    }
  }
  while (1){
    int tmp;
    cin>>tmp;
    int cnt = 0;
    if(tmp == 0) return 0;
    else {
      for(int i = tmp+1; i<=2*tmp; i++){
        if(arr[i]==0) cnt++;
      }
    }
    cout<<cnt<<"\n";
  }
  return 0;
}
