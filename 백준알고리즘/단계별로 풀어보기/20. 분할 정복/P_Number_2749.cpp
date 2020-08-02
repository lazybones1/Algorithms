#include <iostream>
#define p 1000000
using namespace std;

long long basic[2][2] = {{1,1},{1,0}}, fibo[2][1]{{1},{0}};
long long ans[2][2] = {{1,0},{0,1}}, tmp[2][2];
long long n;

void mul(long long m1[2][2], long long m2[2][2]){
  for(int x=0; x<2; x++){
    for(int y=0; y<2; y++){
      tmp[x][y] = 0;
      for(int k = 0; k<2; k++){
        tmp[x][y] += m1[x][k] * m2[k][y];
      }
    }
  }
  for(int x=0; x<2; x++){
    for(int y=0; y<2; y++){
      m1[x][y] = tmp[x][y] % p;
    }
  }
}


int main() {
  cin>>n;
  n-=1;
  while(n>0){
    if(n%2 == 1){
      mul(ans, basic);
    }
    mul(basic, basic);
    n/=2;
  }
  long long answer = (ans[0][0] * fibo[0][0] + ans[0][1] * fibo[1][0]) % p;
  cout<<answer;
  return 0;
}
