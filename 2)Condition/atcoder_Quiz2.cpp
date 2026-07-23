//https://vjudge.net/problem/AtCoder-abc219_a/origin
#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;

    if(x>=0 && x<=39)
        cout<<40-x;

    else if(x>=40 && x<=69)
        cout<<70-x;

   else if(x>=70 && x<=89)
        cout<<90-x;

  else if( x>=90)
        cout<<"expert";

}