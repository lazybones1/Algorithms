#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

struct mat{
  int r, c;
};
mat m[501];

int dp[501][501];
int n;

int solve(int x, int y){
  if(x==y) return 0;
  int &ref = dp[x][y];
  if(ref != -1) return ref;

  int mm = INT_MAX;
  for(int i = x; i<y; i++)
    mm = min(mm, solve(x, i) + solve(i+1, y) + m[x].r * m[i].c * m[y].c);
  return ref = mm;
}

int main() {
  cin>>n;
  for(int i = 0; i<n; i++){
    cin>>m[i].r>>m[i].c;
  }
  memset(dp, -1, sizeof(dp));
  cout<<solve(0, n-1);

  return 0;
}
