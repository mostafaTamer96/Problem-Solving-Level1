//https://atcoder.jp/contests/abc175/tasks/abc175_a?lang=en
#include <iostream>
using namespace std;
int main(){
char x,y,z;
cin>>x>>y>>z;

if(x==y && x==z)
cout<<0;

    else if(x==y && x!=z || y==z)
    cout<<2;

else if(x==z && x!=y)
cout<<1;    


//cout<<x<<y<<z;
}