#include <iostream>
using namespace std;

void show_gugudan(int n){
    for(int i = 1; i<=9; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}

int main(){
    int N;
    cin>>N;
    show_gugudan(N);
    return 0;
}
