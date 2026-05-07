#include <iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;

int plus,minus,multiply;
plus=a+b;
minus=a-b;
multiply=a*b;

if(plus>=minus && plus>=multiply)
cout<<plus;
else if (multiply>=plus && multiply>=minus)
cout<<multiply;
else 
cout<<minus;

}