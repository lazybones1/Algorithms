#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int a[12];
int n;
int big = std::numeric_limits<int>::min();
int small = std::numeric_limits<int>::max();

void dfs(int index, int operR, int add, int sub, int mul, int div){
  if(index == n){
    if(operR > big) big = operR;
    if(operR < small) small = operR;
    return;
  }
  if(add != 0){
    dfs(index+1, operR + a[index], add-1, sub, mul, div);
  }
  if(sub != 0){
    dfs(index+1, operR - a[index], add, sub-1, mul, div);
  }
  if(mul != 0){
    dfs(index+1, operR * a[index], add, sub, mul-1, div);
  }
  if(div != 0){
    dfs(index+1, operR / a[index], add, sub, mul, div-1);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int op[4];
  cin>>n;
  for(int i = 0; i<n; i++){
    cin>>a[i];
  }
  for(int i = 0; i<4; i++){
    cin>>op[i];
  }

  dfs(1, a[0], op[0], op[1], op[2], op[3]);

  cout<<big<<"\n"<<small;
  return 0;
}
