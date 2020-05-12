#include <iostream>
using namespace std;

int find_leap_year(int year){
    if(year%4 == 0 && (year % 100 !=0 || year % 400==0))
        return 1;
    else return 0;
}

int main(){
    int year;
    cin>>year;
    cout<<find_leap_year(year);

    return 0;
}
