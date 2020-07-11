#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(NULL); cin.tie(NULL);

  int stack[10000];
	int N, num, top=0;
	string m;
	cin>>N;

	for(int i=0; i<N; i++) {
		cin>>m;
		if(m=="push") {
			cin>>num;
			stack[top]=num;
			top++;
		}
		else if(m=="pop") {
			if(top<=0)
				cout<<-1<<"\n";
			else {
				cout<<stack[top-1]<<"\n";
				top--;
			}
		}
		else if(m=="size") {
			cout<<top<<"\n";
		}
		else if(m=="empty") {
			if(top>0)
				cout<<0<<"\n";
			else
				cout<<1<<"\n";
		}
		else if(m=="top") {
			if(top>0)
				cout<<stack[top-1]<<"\n";
			else
				cout<<-1<<"\n";
		}
	}
}
