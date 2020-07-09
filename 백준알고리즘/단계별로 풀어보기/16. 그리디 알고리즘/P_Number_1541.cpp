#include <iostream>
#include <string>
using namespace std;

string q;

int greedy(){
  int oper = 0, ans=0;
  bool flag = true;
  for(int i = 0; i<q.length(); i++){
    if(q[i] == '+'){
      if(oper!= 0 && flag){
        ans += oper;
      }
      else if (oper != 0 && !flag){
        ans -=oper;
      }
      oper = 0;
    }
    else if(q[i] == '-'){
      if(oper!= 0 && flag){
        ans += oper;
      }
      else if (oper != 0 && !flag){
        ans -=oper;
      }
      oper = 0;
      flag = false;
    }
    else{
      oper *= 10;
      oper += q[i] - '0';
    }
  }
  if(flag){
        ans += oper;
      }
  else if(!flag){
    ans -=oper;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  cin>>q;
  cout<<greedy();
  return 0;
}
