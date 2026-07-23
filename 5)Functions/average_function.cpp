#include <iostream>
using namespace std;

int average(float x, float y, float z){
// int my=0;
// // cin>>x>>y>>z;
    return(x+y+z)/3;
}
int main(){
    int m1,m2,m3;
   // average(m1,m2,m3);
    cin>>m1>>m2>>m3;

    cout<<average(m1,m2,m3)<<endl;
}