#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  string a, b, newa, newb;
  int answer;
  cin>>a>>b;
  for(int i = 2; i>=0; i--){
    newa[2-i] = a[i];
    newb[2-i] = b[i];
  }
  answer = max(atoi(newa.c_str()), atoi(newb.c_str()));
  cout<<answer;
  return 0;
}
