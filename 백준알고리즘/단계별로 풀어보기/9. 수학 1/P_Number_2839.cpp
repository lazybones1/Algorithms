#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int five = n/5;
  int three = 0;
  while(five>=0){
    if((n-5*five)%3 == 0){
      three = (n-5*five)/3;
      cout<<three + five;
      return 0;
    }
    five--;
  }
  cout<<"-1";
  return 0;
}
