#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int rgb[1000][3];
int n;

int paint(){
  for(int i=1; i<n; i++){
    rgb[i][0] += min(rgb[i-1][1], rgb[i-1][2]);
    rgb[i][1] += min(rgb[i-1][0], rgb[i-1][2]);
    rgb[i][2] += min(rgb[i-1][0], rgb[i-1][1]);
  }
  sort(rgb[n-1],rgb[n-1]+3);
  return rgb[n-1][0];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin>>n;
  for(int i = 0; i<n; i++){
    cin>>rgb[i][0]>>rgb[i][1]>>rgb[i][2];
  }
  int ans = paint();
  cout<<ans;
  return 0;
}
