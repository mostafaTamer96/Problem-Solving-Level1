#include <iostream>
using namespace std;
int main(){

int num,passengers,counter=0;
cin>>num;
for(int i=1;i<=num;i++){
cin>>passengers;
if(passengers==4)
counter++;
else if(passengers+passengers>=4)
counter++;

}
cout<<counter;
}
