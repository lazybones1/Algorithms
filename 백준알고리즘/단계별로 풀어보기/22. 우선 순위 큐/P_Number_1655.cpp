#include <iostream>
#include <queue>
using namespace std;

struct cmp{
  bool operator()(int a, int b){
    return a>b;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int n;
  cin>>n;
  priority_queue<int> small;
  priority_queue<int, vector<int>, cmp> big;
  for(int i = 0; i< n; i++){
    int num;
    cin>>num;
    small.push(num);
    if(small.size() == big.size()+2){
      big.push(small.top());
      small.pop();
    }
    if(!big.empty() && small.top()>big.top()){
      big.push(small.top());
      small.pop();
      small.push(big.top());
      big.pop();
    }
    cout<<small.top()<<"\n";
  }
  return 0;
}
