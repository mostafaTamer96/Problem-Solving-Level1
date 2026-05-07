#include <iostream>
using namespace std;
int main(){

char x,y,z;
cin>>x>>y>>z;
    // RRR
  if(x==y && y==z && x=='R')
    cout<<3;
    // SRR
    //RRS
else if (x==y || y==z && y=='R')
    cout<<2;
        //SSR
        //RSS
else if (x=='R' || y=='R' || z=='R')
cout<<1;

else cout<<0;

}