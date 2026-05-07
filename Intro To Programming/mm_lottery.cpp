#include <iostream>
using namespace std;
int main(){

    int input,bills=0;
    cin>>input;

    bills+=input/100;
    input%=100;

    bills+=input/20;
    input%=20;

    bills+=input/10;
    input%=10;

    bills+=input/5;
    input%=5;

        //the last step
     bills+=input;


    cout<<bills;
return 0;






}