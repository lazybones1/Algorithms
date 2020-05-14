#include <iostream>
using namespace std;

bool find(int n){
  if(n==1000) return false;
  int h = n/100, t = (n%100)/10, o = (n%100)%10;
  if((h-t) == (t-o)) return true;
  else return false;
}

int main() {
  int N;
  cin>>N;
  int cnt = 0;
  for(int i = 1; i<=N; i++){
    if(i<100) cnt++;
    else if(find(i)) cnt++;
  }
  cout<<cnt;
  return 0;
}
