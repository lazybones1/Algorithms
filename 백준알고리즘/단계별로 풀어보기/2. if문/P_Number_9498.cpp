#include <iostream>
using namespace std;

int main() {
    int A;
    cin>>A;
    if(A>=90 && A<=100){
        cout<<"A"<<endl;
    }else if(A>=80 && A<=100){
        cout<<"B"<<endl;
    }else if(A>=70&& A<=100){
        cout<<"C"<<endl;
    }else if(A>=60&& A<=100){
        cout<<"D"<<endl;
    }else{
        cout<<"F"<<endl;
    }
    return 0;
}
