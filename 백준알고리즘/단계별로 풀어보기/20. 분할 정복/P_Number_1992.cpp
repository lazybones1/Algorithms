#include <iostream>
using namespace std;

char map[64][64];

int isfill(int sx, int sy, int ex, int ey){
  int ret = map[sx][sy];
  for(int x = sx; x<=ex; x++){
    for(int y = sy; y<=ey; y++){
      if(map[x][y] != ret) return -1;
    }
  }
  return ret;
}

void quad(int sx, int sy, int ex, int ey){
  int ret = isfill(sx, sy, ex, ey);
  if(ret == '0'){
    cout<<"0";
    return;
  }
  else if(ret == '1'){
    cout<<"1";
    return;
  }
  cout<<"(";
  quad(sx, sy, (sx+ex)/2, (sy+ey)/2);
  quad(sx,(sy+ey)/2+1, (sx+ex)/2, ey);
  quad((sx+ex)/2+1, sy, ex, (sy+ey)/2);
  quad((sx+ex)/2+1, (sy+ey)/2+1, ex, ey);
  cout<<")";
}

int main() {
  int n;
  cin>>n;

  for(int x=0; x<n; x++){
    for(int y = 0; y<n; y++){
      cin>>map[x][y];
    }
  }
  quad(0,0,n-1,n-1);
  return 0;
}
