#include <iostream>
#include <deque>
using namespace std;

int main() {
  int t;
  cin>>t;
  for(int j = 0; j<t; j++){
    string p;
    int n;
    deque<string> q;
    cin>>p>>n;
    string nums;
    cin>>nums;
    string tmp="";
    for(int i = 0; i<nums.length(); i++){
      if(nums[i] != '[' && nums[i] != ']' && nums[i] != ','){
        tmp+=nums[i];
        if(nums[i+1] != '[' && nums[i+1] != ']' && nums[i+1] != ','){
          continue;
        }
        else {
          q.push_back(tmp);
          tmp = "";
        }
      }
    }
    bool direct = true;
    bool err = false;
    for(int i = 0; i<p.length(); i++){
      if(p[i] == 'R'){
        direct = !direct;
      }
      else if(p[i] == 'D'){
        if(q.empty()){
          err = true;
          break;
        }
        if(direct){
          q.pop_front();
        }
        else{
          q.pop_back();
        }
      }
    }
    if(!err){
      cout<<"[";
      if(direct){
        for(int i = 0; i<q.size(); i++){
          cout<<q[i];
          if(i != q.size()-1){
            cout<<",";
          }
        }
      }
      else{
        for(int i = q.size()-1; i>=0; i--){
          cout<<q[i];
          if(i != 0){
            cout<<",";
          }
        }
      }

      cout<<"]\n";
    }
    else{
      cout<<"error\n";
    }
  }
  return 0;
}
