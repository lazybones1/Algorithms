#include <iostream>
#include <stack>
using namespace std;

bool findRight(string str){
  stack<char> s;
  for(int i = 0; i<str.length(); i++){
    if(str[i] == '('){
      s.push(str[i]);
    }
    else if(str[i] == ')'){
      if(s.empty()) return false;
      else s.pop();
    }
  }
  return s.empty();
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int t;
  cin>>t;
  for(int i = 0; i<t; i++){
    string str;
    cin>>str;
    if(findRight(str)) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
  }

  return 0;
}
