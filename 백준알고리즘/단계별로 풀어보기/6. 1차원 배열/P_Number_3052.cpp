#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int arr[42] = {0};
  int cnt = 0;
  for(int i = 0; i<10; i++){
    int tmp;
    cin>>tmp;
    arr[tmp%42]++;
  }
  for(int i = 0 ; i<42; i++){
    if(arr[i]>0) cnt++;
  }
  cout<<cnt;
  return 0;
}
