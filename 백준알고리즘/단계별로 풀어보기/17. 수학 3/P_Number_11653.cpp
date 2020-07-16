#include <iostream>
#include <cmath>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int n;
  cin>>n;
  for(int i = 2; i<=sqrt(n); i++){
    while(n%i == 0){
      cout<<i<<"\n";
      n/=i;
    }
  }
  if(n!=1) cout<<n<<"\n";
  return 0;
}
