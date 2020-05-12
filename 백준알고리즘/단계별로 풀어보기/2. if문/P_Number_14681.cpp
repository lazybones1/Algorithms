#include <iostream>
using namespace std;

int find_quadrant(int x, int y){
    if(x>0 && y>0){
        return 1;
    }
    else if(x<0 && y>0){
        return 2;
    }
    else if(x>0 && y<0){
        return 4;
    }
    else{
        return 3;
    }
}

int main(){
    int x, y;
    cin>>x>>y;
    cout<<find_quadrant(x, y);
    return 0;
}
