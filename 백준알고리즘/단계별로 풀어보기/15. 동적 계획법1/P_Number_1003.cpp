#include <iostream>
using namespace std;

int n;
long long fibo[41];

void fibonacci(int index){
  for(int i = 0; i<index; i++){
    if(i == 0){
      fibo[i] = 0;
    }
    else if(i == 1){
      fibo[i] = 1;
    }
    else fibo[i] = fibo[i-1] + fibo[i-2];
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin>>t;
  fibonacci(41);
  for(int i=0; i<t; i++){
    int n;
    cin>>n;
    if(n==0) cout<<1<<" "<<0<<"\n";
    else if(n==1) cout<<0<<" "<<1<<"\n";
    else cout<<fibo[n-1]<<" "<<fibo[n]<<"\n";
  }
  return 0;
}
