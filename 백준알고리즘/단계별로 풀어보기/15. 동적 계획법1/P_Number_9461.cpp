#include <iostream>
using namespace std;

long long padoban[101];
void searchPadoban(){
  for(int i = 0; i<=100; i++){
    if(i == 0) padoban[i] = 0;
    else if(i<4) padoban[i] = 1;
    else if(i<6) padoban[i] = 2;
    else if(i == 6) padoban[i] = 3;
    else if(i == 7) padoban[i] = 4;
    else padoban[i] = padoban[i-1] + padoban[i-5];
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin>>t;
  searchPadoban();
  for(int i = 0;i<t;i++){
    int n;
    cin>>n;
    cout<<padoban[n]<<"\n";
  }
  return 0;
}
