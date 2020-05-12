#include <iostream>
using namespace std;

void set_alarm(int h, int m){
    if(m>=45){
        m = m-45;
        cout<<h<<" "<<m;
    }
    else{
        if(h==0){
            h=23;
        }
        else{
            h=h-1;
        }
        m=60-(45-m);
        cout<<h<<" "<<m;
    }
}

int main(){
    int h, m;
    cin>>h>>m;
    set_alarm(h, m);
    return 0;
}
