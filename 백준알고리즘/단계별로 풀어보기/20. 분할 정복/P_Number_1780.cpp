#include <iostream>
using namespace std;

int map[2200][2200];
int ans[3] = {0,0,0};
int isfull(int x, int y, int n){
  int ret = map[x][y];
  for(int i = x; i<x+n; i++){
    for(int j= y; j<y+n; j++){
      if(ret != map[i][j]) return 3;
    }
  }
  return ret;
}

void nine(int x, int y, int n){
  int ret = isfull(x, y, n);
  if(ret != 3){
    ans[ret+1]++;
    return;
  }
  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      nine(x+i*n/3, y+j*n/3, n/3);
    }
  }
}

int main() {
  int n;
  cin>>n;
  for(int x = 0; x<n; x++){
    for(int y = 0; y<n; y++){
      cin>>map[x][y];
    }
  }

  nine(0,0,n);
  for(int i = 0; i<3; i++){
    cout<<ans[i]<<"\n";
  }
  return 0;
}
