#include <iostream>
#include <stack>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int k;
  cin>>k;
  int ans = 0;
  stack<int> s;
  for(int i = 0; i<k; i++){
    int command;
    cin>>command;
    if(command == 0){
      s.pop();
    }
    else{
      s.push(command);
    }
  }
  int stackSize = s.size();
  for(int i = 0; i<stackSize; i++){
    ans += s.top();
    s.pop();
  }

  cout<<ans;
  return 0;
}
