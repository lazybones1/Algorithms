#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int n, k;
  cin>>n>>k;
  queue<int> q;
  int index = k;
  for(int i = 1; i<=n; i++){
    q.push(i);
  }
  cout<<"<";
  while(!q.empty()){
    if(index != 1){
      q.push(q.front());
      q.pop();
      index--;
    }
    else{
      cout<<q.front();
      q.pop();
      if(!q.empty()) cout<<", ";
      index = k;
    }
  }
  cout<<">";
  return 0;
}
