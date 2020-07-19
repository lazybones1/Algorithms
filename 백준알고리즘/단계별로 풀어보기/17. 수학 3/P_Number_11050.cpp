#include <iostream>
using namespace std;

int gcd(int a, int b){
  return b?gcd(b,a%b):a;
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int n, k;
  cin>>n>>k;

  int oper1 = 1, oper2 = 1;
  for(int i = 0; i<k; i++){
    oper1 *= n-i;
    oper2 *= i+1;
  }
  int tmp = gcd(oper1, oper2);
  cout<<(oper1/tmp)/(oper2/tmp);
  return 0;
}
