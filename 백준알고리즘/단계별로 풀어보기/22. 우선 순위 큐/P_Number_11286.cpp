#include <iostream>
#include <queue>
using namespace std;

struct cmp{
  bool operator()(int a, int b){
    if(abs(a) == abs(b)) return a>b;
    return abs(a) > abs(b);
  }
};

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int n;
  cin>>n;
  priority_queue<int, vector<int>, cmp> q;
  for(int i = 0; i<n; i++){
    int oper;
    cin>>oper;
    if(oper == 0){
      if(q.empty()) cout<<"0"<<"\n";
      else{
        cout<<q.top()<<"\n";
        q.pop();
      }
    }
    else{
      q.push(oper);
    }
  }

  return 0;
}
