#include <iostream>
using namespace std;

int geater(int x, int y, int z){
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
cout<<geater(z,x,c)<<endl;

return 0;
}