#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool comp(string p1, string p2){
  if(p1.length() == p2.length()){
    return p1<p2;
  }
  else return p1.length()<p2.length();
}

int main() {
  int n;
  cin>>n;
  vector<string> v;
  for(int i = 0; i<n; i++){
    string s;
    cin>>s;
    v.push_back(s);
  }
  sort(v.begin(), v.end(), comp);
  for(int i = 0; i<v.size(); i++){
    if(i!=0 && v[i] == v[i-1]) continue;
    else cout<<v[i]<<"\n";
  }
  return 0;
}
