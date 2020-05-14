#include <iostream>
using namespace std;

void drawStar(int n){
    for(int i = 0; i<n ; i++){
        for(int j = 0 ; j<i; j++){
            cout<<" ";
        }
        for(int j = 1; j<2*(n-i); j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i =1; i<n; i++){
        for(int j = 1 ; j<n-i; j++){
            cout<<" ";
        }
        for(int j = 0; j<=(2*i); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    drawStar(n);
    return 0;
}
