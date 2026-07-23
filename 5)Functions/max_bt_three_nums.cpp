#include <iostream>
using namespace std;

int fmax(int x, int y, int z){
    int max=x;
    if(y>=max)
    max=y;
    if (z>=max)
    max=z;
    return max;

    }

    int main(){
    int z=0,x=0,c=0;
    cin>>z>>x>>c;
    cout<<fmax(z,x,c)<<endl;

    return 0;
    }