#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  int arr[15][15];
  for(int a = 0; a<15; a++){
    for(int b=1; b<=15; b++){
      if(a==0) arr[a][b] = b;
      else if(b==1) arr[a][b] = 1;
      else arr[a][b] = arr[a-1][b] +arr[a][b-1];
    }
  }
  for(int j = 0; j<t; j++){
    int k, n;
    cin>>k>>n;
    cout<<arr[k][n]<<endl;
  }
  return 0;
}
