#include <iostream>
#include <deque>
using namespace std;

int main() {
  int count=0;
  deque<int> dq;
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; ++i)
    dq.push_back(i);
  for (int i = 0; i < m; ++i) {
    int num;
    cin >> num;
    int index;
    for (int i = 0; i < dq.size(); ++i) {
      if (dq[i] == num) {
        index = i;
        break;
      }
    }
    if (index < dq.size() - index) {
      for (;;) {
        if (dq.front() == num) {
          dq.pop_front();
          break;
        }
        ++count;
        dq.push_back(dq.front());
        dq.pop_front();
      }
    }
    else {
      for (;;) {
        if (dq.front() == num) {
          dq.pop_front();
          break;
        }
        ++count;
        dq.push_front(dq.back());
        dq.pop_back();
      }
    }
  }
  cout<<count;
}
