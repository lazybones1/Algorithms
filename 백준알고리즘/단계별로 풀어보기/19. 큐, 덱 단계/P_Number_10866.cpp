#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<int> dq;
  int n;
  cin>>n;
  for(int i = 0; i<n; i++){
    string s;
    cin>>s;
    if(s=="push_front"){
      int tmp;
      cin>>tmp;
      dq.push_front(tmp);
    }
    else if(s=="push_back"){
      int tmp;
      cin>>tmp;
      dq.push_back(tmp);
    }
    else if(s=="pop_front"){
      if(dq.empty()){
        cout<<-1<<"\n";
      }
      else{
        cout<<dq.front()<<"\n";
        dq.pop_front();
      }
    }
    else if(s=="pop_back"){
      if(dq.empty()){
        cout<<-1<<"\n";
      }
      else{
        cout<<dq.back()<<"\n";
        dq.pop_back();
      }
    }
    else if(s=="size"){
      cout<<dq.size()<<"\n";
    }
    else if(s=="empty"){
      cout<<(dq.empty()?1:0)<<"\n";
    }
    else if(s=="front"){
      if(dq.empty()){
        cout<<-1<<"\n";
      }
      else{
        cout<<dq.front()<<"\n";
      }
    }
    else if(s=="back"){
      if(dq.empty()){
        cout<<-1<<"\n";
      }
      else{
        cout<<dq.back()<<"\n";
      }
    }
  }
  return 0;
}
