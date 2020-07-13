#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int n;
  int arr[100000];
  cin>>n;

  for(int i = 1; i<=n; i++){
    cin>>arr[i];
  }

  stack<int> s;
  vector<char> v;
  int index = 1;
  int num = 1;
  while(1){
    if(index == n+1 || num==n+2) break;
    if(!s.empty() && s.top() == arr[index]){
      s.pop();
      index++;
      v.push_back('-');
    }
    else if(s.empty() || s.top() != arr[index]){
      s.push(num);
      num++;
      v.push_back('+');
    }
  }
  if(!s.empty()){
    cout<<"NO";
  }
  else{
    for(int i = 0; i<v.size(); i++){
      cout<<v[i]<<"\n";
    }
  }
  return 0;
}
