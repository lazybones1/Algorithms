#include <iostream>
using namespace std;

int main(){
    int avg = 0;
    for(int i =0; i<5; i++){
        int grade;
        cin>>grade;
        if(grade <40) grade = 40;
        avg += grade;
    }
    cout<<avg/5;
    return 0;
}
