#include <iostream>
using namespace std;
int main(){

int x,sum=0,p,v,t,counter=0;

cin>>x;

for(int i=0;i<x;i++){
    cin>>p>>v>>t;

    if(p+v+t>=2 || p+t>=2 || p+v>=2|| v+t>=2)
    counter++;
   
}
 cout<<counter;

}
