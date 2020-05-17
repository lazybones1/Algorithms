#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  string s;
  cin>>s;
  int arr[26] ;
  fill_n(arr, 26, 0);
  for(int i = 0; i<s.length(); i++){
    char tmp = toupper(s[i]);
    arr[(int)tmp -'A']++;
  }
  int index = 0;
  bool judge = true;
  char many;
  for(int i=1; i<26; i++){
    if(arr[index]<arr[i]){
      index = i;
      judge = true;
    }
    else if(arr[index] == arr[i]){
      judge = false;
    }
  }
  if(!judge){
    cout<<"?";
  }
  else {
    cout<<(char)('A'+index);
  }
  return 0;
}
