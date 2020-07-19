#include <iostream>
using namespace std;

int gcd(long long a, long long b) {
  return b ? gcd(b, a%b) : a;
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int n;
  cin>>n;
  int rings[1001];
  for(int i = 0; i<n; i++){
    cin>>rings[i];
    if(i!=0){
      int n = gcd(rings[0], rings[i]);
      cout<<rings[0]/n<<"/"<<rings[i]/n<<"\n";
    }
  }

  return 0;
}
