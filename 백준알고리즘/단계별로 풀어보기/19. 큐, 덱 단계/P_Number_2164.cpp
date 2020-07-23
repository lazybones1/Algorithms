#include <iostream>
#include <deque>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int n;
  deque<int> q;
  cin>>n;
  for(int i = 1; i<=n; i++){
    q.push_back(i);
  }
  while(q.size() != 1){
    q.pop_front();
    q.push_back(q.front());
    q.pop_front();
  }
  cout<<q.front();
  return 0;
}
