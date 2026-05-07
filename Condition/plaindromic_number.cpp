#include <iostream>
using namespace std;
int main(){

int a;
cin>>a;
int new_var=a;
int new_var2=a;
int new_var3=a;


int hundreds,tens,ones;



new_var%=10;


new_var2/=10;
new_var2%=10;

new_var3/=100;
new_var3%=10;


ones=new_var3;
tens=new_var2*10+new_var3;

hundreds=new_var*100+tens;

if(a==hundreds){
cout<<"Yes";}
else{
cout<<"No";
}
}