#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin>>n>>m;
  int* arr = new int[n];
  int ans = -1;
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  for(int i = 0; i<n-2; i++){
    for(int k=i+1; k<n-1; k++){
      for(int j=k+1; j<n; j++){
        int tmp = arr[i]+arr[k]+arr[j];
        if(tmp<=m){
          if(ans == -1) ans = tmp;
          else if(m-ans>m-tmp){
          ans = tmp;
          }
        }
      }
    }
  }
  cout<<ans;
  return 0;
}
