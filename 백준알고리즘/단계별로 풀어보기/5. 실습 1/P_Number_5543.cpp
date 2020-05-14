#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int buger;
    int drink;
    for(int i = 0; i<3; i++){
        int tmp;
        cin>>tmp;
        if(i==0) buger = tmp;
        else buger = min(buger, tmp);
    }
    for(int i = 0; i<2 ; i++){
        int tmp;
        cin>>tmp;
        if(i==0) drink = tmp;
        else drink = min(drink, tmp);
    }
    cout<<drink+buger-50;
    return 0;
}
