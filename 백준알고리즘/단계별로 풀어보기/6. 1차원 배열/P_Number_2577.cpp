#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int A, B, C;
  cin>>A>>B>>C;
  int mul = A*B*C;
  int arr[10] = {0};
  while(mul>10){
    arr[mul%10]++;
    mul/=10;
  }
  arr[mul]++;
  for(int i = 0; i<10; i++){
    cout<<arr[i]<<endl;
  }
}
