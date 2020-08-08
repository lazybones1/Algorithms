#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);
  int n;
  cin>>n;
  priority_queue<long long, vector<long long>, greater<long long>> q;
  for(int i = 0; i<n; i++){
    long long oper;
    cin>>oper;
    if(oper == 0){
      if(!q.empty()){
        cout<<q.top()<<"\n";
        q.pop();
      }
      else{
        cout<<"0"<<"\n";
      }
    }
    else{
      q.push(oper);
    }
  }
  return 0;
}
