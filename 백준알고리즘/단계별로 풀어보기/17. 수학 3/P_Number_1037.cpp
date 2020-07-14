#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int n;
  cin>>n;
  long long factor[51];

  for(int i = 0; i<n; i++){
    cin>>factor[i];
  }

  sort(factor, factor+n);
  cout<<factor[0]*factor[n-1];

  return 0;
}
