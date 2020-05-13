#include <iostream>
using namespace std;

int main(){
    int N, X;
    cin>>N>>X;
    for(int i = 0; i<N; i++){
        int tmp;
        cin>>tmp;
        if(tmp<X) cout<<tmp<<" ";
    }
    return 0;
}
