#include <iostream>
using namespace std;

void drawStar(int n){
    for(int i = 1; i<n; i++){
        for(int j = 0; j<i; j++)
            cout<<"*";
        cout<<endl;
    }
    for(int i = n; i>0; i--){
        for(int j = i; j>0; j--)
            cout<<"*";
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    drawStar(n);
    return 0;
}
