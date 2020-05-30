#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int dungchi[n][3];
	for(int i=0; i<n; i++){
		cin>>dungchi[i][0]>>dungchi[i][1];
		dungchi[i][2]=0;
	}
	for(int i=0; i<n; i++){
		int rank=1;
		for(int k=0; k<n; k++){
			if(dungchi[i][0] < dungchi[k][0] && dungchi[i][1] < dungchi[k][1]){
				rank++;
			}
			dungchi[i][2] = rank;
		}
	}
	for(int i=0; i<n; i++){
		cout<<dungchi[i][2]<<" ";
	}
}
