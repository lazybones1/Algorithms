#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  for(int i = 0; i<t; i++){
    int h,w,n;
    cin>>h>>w>>n;
    int roomH, roomW;
    if(n%h == 0){
      roomH = h;
      roomW = n/h;
    }
    else {
      roomH = n%h;
      roomW = n/h+1;
    }
    cout<<roomH*100+roomW<<endl;
  }
  return 0;
}
