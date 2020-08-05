#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];
int want[100000];
int n, m;

void solve(int s, int e, int target){
  while(s<=e){
    int mid = (s+e)/2;
    if(arr[mid] == target) {
      cout<<"1\n";
      return;
    }
    else if(arr[mid] < target){
      s = mid+1;
    }
    else e = mid - 1;
  }
  cout<<"0\n";
}

int main() {
  cin>>n;
  for(int i = 0;i<n; i++){
    cin>>arr[i];
  }
  cin>>m;
  for(int i = 0; i< m; i++){
    cin>>want[i];
  }
  sort(arr, arr+n);
  for(int i = 0; i<m; i++){
    int t = want[i];
    solve(0, n-1, t);
  }
  return 0;
}
