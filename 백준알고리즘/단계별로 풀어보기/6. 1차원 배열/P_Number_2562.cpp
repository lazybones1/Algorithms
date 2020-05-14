#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int index;
  int maxN;
  for(int i = 0; i<9; i++){
    int tmp;
    cin>>tmp;
    if(i==0) {
      maxN = tmp;
      index = i;
    }
    else {
      if(maxN<tmp){
        maxN=tmp;
        index = i;
      }
    }
  }
  cout<<maxN<<"\n"<<index+1;
}
