#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin>>n;
  int* grade = new int[n];
  double* arr = new double[n];
  double avg = 0;
  int big;
  for(int i = 0; i<n; i++){
    cin>>grade[i];
    if(i == 0) big = grade[i];
    else big = max(big, grade[i]);
  }
  for(int i = 0; i<n; i++){
    avg += (double)grade[i]/(double)big *100;
  }
  avg = avg/n;
  cout<<avg;
  return 0;
}
