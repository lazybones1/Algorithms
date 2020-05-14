#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
  int C;
  cin>>C;
  for(int i=0; i<C; i++){
    int n;
    cin>>n;
    int* arr = new int[n];
    double avg = 0;
    int cnt = 0;
    for(int j=0; j<n; j++){
      cin>>arr[j];
      avg+=arr[j];
    }
    avg = avg/n;
    for(int j=0; j<n; j++){
      if(arr[j]>avg) cnt++;
    }
    cout << fixed;
    cout.precision(3);
    cout<<((double)cnt)/n*100<<"%"<<endl;
  }
  return 0;
}
