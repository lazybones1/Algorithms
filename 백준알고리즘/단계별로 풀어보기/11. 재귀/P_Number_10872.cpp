#include <iostream>
using namespace std;

int facto(int n, int answer){
  if(n==1) return answer;
  answer = facto(n-1, answer * (n-1));
  return answer;
}

int main() {
  int n;
  cin>>n;
  if(n==0) cout<<1;
  else cout<<facto(n, n);
  return 0;
}
