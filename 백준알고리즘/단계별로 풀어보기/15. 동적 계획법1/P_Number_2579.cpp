#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
int dp[300];
int stairs[300];

int ans() {
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            dp[i] = stairs[i];
        }
        else if (i == 1) {
            dp[i] = max(stairs[i-1] + stairs[i], stairs[i]);
        }
        else if (i == 2) {
            dp[2] = max(stairs[i-2] + stairs[i], stairs[i-1] + stairs[i]);
        }
        else dp[i] = max(dp[i - 2] + stairs[i], dp[i - 3] + stairs[i - 1] + stairs[i]);
    }
    return dp[n-1];
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stairs[i];
    }
    int answer = ans();
    cout << answer;
    return 0;
}
