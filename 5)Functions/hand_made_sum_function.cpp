#include <iostream>
using namespace std;

int sum(int x, int y=2){
return x+y;
}

int main(){
   int a=12,b;
   cin>>a>>b;
   cout<<sum(a,b)<<endl;
    return 0;
}