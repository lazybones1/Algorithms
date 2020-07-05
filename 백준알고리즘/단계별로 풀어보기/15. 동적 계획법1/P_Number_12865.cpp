#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,k;
int d[100001];
int w[101];
int v[101];

void dp(){
  for(int i=1; i<=n; i++){
    for(int j=k; j>=1; j--){
      if(w[i] <= j){
        d[j] = max(d[j], d[j-w[i]] + v[i]);
      }
    }
  }
  cout << d[k] << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  cin>>n>>k;
  for(int i = 1; i<=n; i++){
    cin>>w[i]>>v[i];
  }
  dp();
  return 0;
}
