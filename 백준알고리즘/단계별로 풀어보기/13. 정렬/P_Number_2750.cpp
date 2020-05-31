#include <iostream>
#include <limits.h>
using namespace std;

void selection(int *num_array, int num_array_size);

int main(){
    int n;
    cin>>n;

    int tmp;
    int array[1000];

    for(int i = 0; i<n; i++){
        cin>>tmp;
        array[i] = tmp;
    }

    selection(array, n);

    for(int i = 0; i<n; i++){
        cout<<array[i]<<endl;
    }
}
void selection(int *num_array, int num_array_size) {
	int min, index, temp;

	for (int i = 0; i < num_array_size; i++) {
		min = INT_MAX;
		for (int j = i; j <num_array_size; j++) {
			if (min > num_array[j]) {
				min = num_array[j];
				index = j;
			}
		}
		temp = num_array[i];
		num_array[i] = num_array[index];
		num_array[index] = temp;
	}
}
