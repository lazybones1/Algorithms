#include <iostream>
using namespace std;

void hanoi(int n, int from, int by, int to){
  if (n == 1) {
    cout<<from<<" "<<to<<"\n";
	}
	else {
		hanoi(n - 1, from, to, by);
		cout<<from<<" "<<to<<"\n";
		hanoi(n - 1, by, from, to);
	}
}

void hanoiNum(int x)
{
	int num = 1;
	while (--x) {
		num = num * 2 + 1;
	}
  cout<<num<<"\n";
}

int main() {
  int n;
  cin>>n;
  hanoiNum(n);
  hanoi(n, 1, 2, 3);
  return 0;
}
