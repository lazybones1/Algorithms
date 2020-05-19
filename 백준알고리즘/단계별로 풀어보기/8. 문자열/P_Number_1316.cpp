#include <iostream>
using namespace std;

int main() {
  int n;
  int cnt = 0;
  cin>>n;
  for(int i = 0; i<n; i++){
    string s;
    cin>>s;
    int arr[26];
    bool ch = true;
    fill_n(arr, 26, 0);
    for(int j = 0; j<s.length(); j++){
      if(j==0) arr[(int)s[j]-'a']++;
      else if(arr[(int)s[j]-'a'] != 0 && s[j-1] != s[j]) {
        ch = false;
        break;
      }
      else{
        arr[(int)s[j]-'a']++;
      }
    }
    if(ch) cnt++;
  }
  cout<<cnt;
  return 0;
}
