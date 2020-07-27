#include <iostream>
#include <algorithm>
using namespace std;

int map[128][128];
int blue = 0;
int white = 0;

int isfull(int sx, int sy, int ex, int ey){
  int ret = map[sx][sy];
  for(int x = sx; x<=ex; x++){
    for(int y = sy; y<=ey; y++){
      if(map[x][y] != ret){
        return 3;
      }
    }
  }
  return ret;
}

void search(int sx, int sy, int ex, int ey){
  int ret = isfull(sx, sy, ex, ey);
  if(ret == 1) {
    blue++;
    return;
  }
  else if(ret == 0) {
    white++;
    return;
  }
  search(sx, sy, (sx+ex)/2, (sy+ey)/2);
  search((sx+ex)/2+1, sy, ex, (sy+ey)/2);
  search(sx, (sy+ey)/2+1, (sx+ex)/2, ey);
  search((sx+ex)/2+1, (sy+ey)/2+1, ex, ey);
}

int main() {
  int n;
  cin>>n;
  for(int x = 0; x<n; x++){
    for(int y = 0; y<n; y++){
      cin>>map[x][y];
    }
  }
  search(0, 0, n-1, n-1);
  cout<<white<<"\n"<<blue;
  return 0;
}
