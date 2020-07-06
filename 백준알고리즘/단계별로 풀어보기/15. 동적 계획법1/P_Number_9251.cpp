#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s1 = " ", s2 = " ";
int dp[1001][1001];

int main() {
  string i1, i2;
  cin>>i1;
  cin>>i2;
  s1.append(i1);
  s2.append(i2);
  int i, j;
  for (i = 1; s1[i]; i++)
    for (j = 1; s2[j]; j++)
      dp[i][j] = max({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1] + (s1[i] == s2[j])});
  cout<<dp[i-1][j-1];

  return 0;
}
