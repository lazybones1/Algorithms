#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<pair<int, int>> conferInfo;

bool comp(pair<int, int> &a, pair<int, int> &b){
  if(a.second == b.second){
    return a.first < b.first;
  }
  return a.second < b.second;
}

int greedy(){
  int cnt = 1;
  int idx = 0;
  sort(conferInfo.begin(), conferInfo.end(), comp);

  for(int i = 1; i<n; i++){
    if(conferInfo[idx].second <= conferInfo[i].first){
      cnt++;
      idx = i;
    }
  }
  return cnt;
}

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  cin>>n;
  for(int i = 0; i<n; i++){
    int s, e;
    cin>>s>>e;
    conferInfo.push_back(make_pair(s, e));
  }
  cout<<greedy();
  return 0;
}
