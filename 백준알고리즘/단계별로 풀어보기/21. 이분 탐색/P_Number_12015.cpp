#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
  int n;
  int cnt = 0;
  vector<int> v;
  v.push_back(INT_MIN);
  cin>>n;
  for(int i =0; i<n; i++){
    int tmp;
    cin>>tmp;
    if(tmp > v.back()){
      v.push_back(tmp);
      cnt++;
    }
    else{
      auto low = lower_bound(v.begin(), v.end(), tmp);
      *low = tmp;
    }
  }
  cout<<cnt;
  return 0;
}
