#include <iostream>
using namespace std;

int main()
{
int num1,num2,num3,extra;

cin>>num1>>num2>>num3,extra;

extra=num1;
num1=num2;
num2=num3;
num3=extra;
cout<<num1<<"   "<<num2<<"  "<<num3;


return 0;
}