#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  while(1){
    stack<char> s;
    bool flag = true;
    string str;
    getline(cin, str);

    if (str == ".") break;

    for(int i = 0; i<str.length(); i++){
      if(str[i] == '(' || str[i] == '[') s.push(str[i]);
      else if(str[i] == ')'){
        if(s.empty() || (!s.empty() && s.top() != '(')){
          flag = false;
          break;
        }
        else if(!s.empty() && s.top() == '(') s.pop();
      }
      else if(str[i] == ']'){
        if(s.empty() || (!s.empty() && s.top() != '[')){
          flag = false;
          break;
        }
        else if(!s.empty() && s.top() == '[') s.pop();
      }
    }

    if(!flag || !s.empty()){
      cout<<"no\n";
    }
    else{
      cout<<"yes\n";
    }
  }
}
