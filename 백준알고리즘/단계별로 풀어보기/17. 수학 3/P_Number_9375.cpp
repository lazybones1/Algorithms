#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  int t;
  cin>>t;
  for(int k = 0; k<t; k++){
    int n;
    unordered_map<string, int> m;
    cin>>n;
    for(int i = 0; i<n; i++){
      string tmp, key;
      cin>>tmp>>key;
      if(m.find(key) == m.end()){
        m.insert({key, 1});
      }
      else{
        m[key]++;
      }
    }
    int ans = 1;
    for(auto key :m ){
      ans *= (key.second + 1);
    }
    ans -= 1;
    cout<<ans<<"\n";
  }
  return 0;
}
