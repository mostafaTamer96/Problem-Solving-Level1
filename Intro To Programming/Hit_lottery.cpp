#include <iostream>
using namespace std;
int main(){

   
 int n;
    cin>>n;
    int numberOfBills=0;
    numberOfBills+=n/100;
    n%=100;
    numberOfBills+=n/20;
    n%=20;
    numberOfBills+=n/10;
    n%=10;
    numberOfBills+=n/5;
    n%=5;
    numberOfBills+=n;
    cout<<numberOfBills;




}