#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  while(1){
    int fir, sec;
    cin>>fir>>sec;
    if(fir == 0 && sec == 0) break;
    if(fir>sec && fir%sec == 0){
      cout<<"multiple\n";
    }
    else if(fir<sec && sec%fir == 0){
      cout<<"factor\n";
    }
    else{
      cout<<"neither\n";
    }
  }
  return 0;
}
