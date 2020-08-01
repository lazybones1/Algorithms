#include <iostream>
typedef long long ll;
using namespace std;

ll n, b;
ll basic[6][6], ans[6][6], m3[6][6];

void mul(ll m1[6][6], ll m2[6][6]){
  for(int  x= 0; x< n; x++){
    for(int y = 0; y<n; y++){
      m3[x][y] = 0;
      for(int k = 0; k<n; k++){
        m3[x][y] += m1[x][k] * m2[k][y];
      }
      m3[x][y]%=1000;
    }
  }
  for(int x = 0; x < n; x++)
    for (int y = 0; y < n; y++)
      m1[x][y] = m3[x][y];
}

int main() {
  cin>>n>>b;
  for(int x = 0; x<n; x++){
    for(int y = 0; y<n; y++){
      cin>>basic[x][y];
    }
    ans[x][x] = 1;
  }

  while(b>0){
    if(b%2 == 1){
      mul(ans, basic);
    }
    mul(basic, basic);
    b/=2;
  }

  for(int x = 0; x< n; x++){
    for(int y = 0; y<n; y++){
      cout<<ans[x][y]<<" ";
    }
    cout<<"\n";
  }
}
