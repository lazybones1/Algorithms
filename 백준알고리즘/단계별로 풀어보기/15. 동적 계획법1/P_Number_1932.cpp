#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
int triangle[500][500];

int sum(){
  for(int i = 1; i<n; i++){
    for(int j = 0; j<=i; j++){
      if(j==0){
        triangle[i][j] += triangle[i-1][j];
      }
      else if(j==i){
        triangle[i][j] += triangle[i-1][j-1];
      }
      else{
        triangle[i][j] += max(triangle[i-1][j], triangle[i-1][j-1]);
      }
    }
  }
  sort(triangle[n-1], triangle[n-1] + n);
  return triangle[n-1][n-1];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin>>n;
  for(int i = 0; i<n; i++){
    for(int j = 0; j<=i; j++){
      cin>>triangle[i][j];
    }
  }
  int ans = sum();
  cout<<ans;
  return 0;
}
