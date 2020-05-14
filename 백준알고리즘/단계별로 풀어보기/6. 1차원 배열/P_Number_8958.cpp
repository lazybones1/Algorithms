#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
  int t;
  cin>>t;
  for(int i = 0; i<t; i++){
    string s;
    cin>>s;
    int point = 0;
    int answer =0;
    for(int i = 0; i<s.length(); i++){
      if(s[i] == 'O'){
        point++;
        answer += point;
      }
      else point = 0;
    }
    cout<<answer<<endl;
  }
  return 0;
}
