#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool comp(pair<int, string> p1, pair<int, string> p2){
  return p1.first<p2.first;
}

int main() {
  int n;
  cin>>n;
  vector<pair<int, string>> v;
  for(int i = 0; i<n; i++){
    int tmp;
    string s;
    cin>>tmp>>s;
    v.push_back(make_pair(tmp,s));
  }
  stable_sort(v.begin(), v.end(), comp);
  for(int i = 0; i<n; i++){
    cout<<v[i].first<<" "<<v[i].second<<"\n";
  }
  return 0;
}
