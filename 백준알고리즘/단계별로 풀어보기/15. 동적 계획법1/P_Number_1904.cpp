#include <iostream>
using namespace std;

long long binSeq[1000000];

void findBinSeq(int n){
  for(int i = 0; i<=n; i++){
    if (i==0) binSeq[i] = 0;
    else if(i==1) binSeq[i] = 1;
    else if(i==2) binSeq[i] = 2;
    else binSeq[i] = (binSeq[i-1] + binSeq[i-2])%15746;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin>>n;
  findBinSeq(n);
  cout<<binSeq[n];
  return 0;
}
