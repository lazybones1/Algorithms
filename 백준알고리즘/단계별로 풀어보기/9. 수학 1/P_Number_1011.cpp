#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin>>t;
  for(int q = 0; q<t; q++){
    long x, y;
    cin>>x>>y;
    long length = y-x;
    long answer = 1;
    long dis = 0;

    while(length>dis){
      answer ++;
      dis += answer/2;
    }
    cout<<answer -1<<endl;
  }
  return 0;
}
