#include <iostream>
using namespace std;

int n;
long long fibo[91];

void searchFibo(int index){
  if(index == n){
    return;
  }
  fibo[index+1] = fibo[index-1]+fibo[index];
  searchFibo(index+1);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin>>n;

  fibo[0] = 0;
  fibo[1] = 1;
  if(n>1) searchFibo(1);

  cout<<fibo[n];
  return 0;
}
