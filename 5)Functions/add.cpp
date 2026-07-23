#include <iostream>
using namespace std;

void num(int &x, int &y){
    x++;
    y++;
    }

    int main(){
        int a,m;
        cin>>a>>m;
        num(a,m);
        num(a,m);
        num(a,m);
        cout<<a<<" ";
        cout<<m<<" ";
   
    return 0;
    }