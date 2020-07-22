#include <iostream>
#include <algorithm>
using namespace std;

pair<long long, long long> find(long long n){
  long long two = 0, five = 0;
  for(long long i = 2; i<=n; i*=2) two+=n/i;
  for(long long i = 5; i<=n; i*=5) five+=n/i;
  return {two, five};
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  long long n, m;
  pair<long long, long long> pn, pm, pnm;
  cin>>n>>m;

  pn = find(n);
  pm = find(m);
  pnm = find(n-m);
  pn.first -= (pnm.first + pm.first);
  pn.second -= (pnm.second + pm.second);

  cout<<min(pn.first, pn.second);
  return 0;

} 
