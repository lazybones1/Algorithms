#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int n;
  cin>>n;
  queue<int> q;
  for(int j= 0;j<n; j++){
    string str;
    cin>>str;
    if(str == "push"){
      int tmp;
      cin>>tmp;
      q.push(tmp);
    }
    else if(str == "pop"){
      if(q.empty()){
        cout<<-1<<"\n";
        continue;
      }
      cout<<q.front()<<"\n";
      q.pop();
    }
    else if(str == "size"){
      cout<<q.size()<<"\n";
    }
    else if(str == "empty"){
      cout<< (q.empty()?1:0) <<"\n";
    }
    else if(str == "front"){
      if(q.empty()){
        cout<<-1<<"\n";
        continue;
      }
      cout<<q.front()<<"\n";
    }
    else if(str == "back"){
      if(q.empty()){
        cout<<-1<<"\n";
        continue;
      }
      cout<<q.back()<<"\n";
    }
  }
  return 0;
}
