#include <iostream>
#include <stack>
using namespace std;

int main() {
  int h[100000];
  int n;
  cin>>n;
  while(n){
    stack<int> s;
    for(int i = 0; i<n; i++) cin>>h[i];
    long long area = 0;

    for(int i = 0; i<n; i++){
      while(!s.empty() && h[s.top()] > h[i]){
        long long height = h[s.top()];
        s.pop();
        long long width = i;
        if(!s.empty()) width = i - s.top()-1;
        if(height * width > area) area = height * width;
      }
      s.push(i);
    }

    while(!s.empty()){
      long long height = h[s.top()];
      s.pop();
      long long width = n;
      if(!s.empty()) width = n - s.top()-1;
      if(height * width > area) area = height * width;
    }
    cout<<area<<"\n";
    cin>>n;
  }
  return 0;
}
