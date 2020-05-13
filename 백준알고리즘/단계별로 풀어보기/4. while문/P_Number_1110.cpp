#include <iostream>
using namespace std;

int find_cycle(int n){
    int newNum = n;
    int cycle = 0;
    while(1){
        int f, b;
        if(newNum<10){
            f = 0;
            b = newNum;
        }
        else{
            f = newNum/10;
            b = newNum%10;
        }
        newNum = (b*10) + ((f+b)%10);
        cycle++;
        if(newNum == n) break;
    }
    return cycle;
}

int main(){
    int N;
    cin>>N;
    cout<<find_cycle(N);
    return 0;
}
