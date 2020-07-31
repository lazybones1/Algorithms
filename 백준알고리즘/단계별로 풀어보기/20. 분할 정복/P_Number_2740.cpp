#include <iostream>
using namespace std;

int matA[101][101], matB[101][101], matAns[101][101];

void solve(int n, int m, int k){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<k; j++){
      for(int t=0; t<m; t++){
        matAns[i][j] += matA[i][t] * matB[t][j];
      }
    }
  }
}

int main() {
  int n, m, k;
  cin>>n>>m;
  for(int x=0; x<n; x++){
    for(int y=0; y<m; y++){
      cin>>matA[x][y];
    }
  }
  cin>>m>>k;
  for(int x=0; x<m; x++){
    for(int y=0; y<k; y++){
      cin>>matB[x][y];
    }
  }

  solve(n, m, k);

  for(int x=0; x<n; x++){
    for(int y=0; y<k; y++){
      cout<<matAns[x][y]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
