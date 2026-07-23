//https://www.hackerrank.com/contests/master/challenges/c-tutorial-conditional-if-else/problem
#include <iostream>
using namespace std;
int main(){

int a,b;
cin>>a>>b;

int multiply=1,addition=0,subtraction=0;
multiply=a*b;
addition=a+b;
subtraction=a-b;


    if (addition>=multiply&& addition>=subtraction)
    cout<<addition; 


    else if(subtraction>=multiply&&subtraction>=addition)
    cout<<subtraction;

   else 
   cout<<multiply;
    
    
    



}