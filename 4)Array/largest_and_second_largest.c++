#include <iostream>

using namespace std;

int main(){

 const int size=5;
 int num[size];
 for(int i=0;i<size;i++)
 cin>>num[i];

int max=num[0];
 int max2=-5;
 int total;

    for(int i=1;i<size;i++){
    if(max<num[i]){
    max2=max;
    max=num[i];}




    else if(max2<num[i] && max!=num[i])
    max2=num[i];
    total=max+max2;
    }



 cout<<max;
 cout<<endl;
 cout<<max2;
cout<<endl;
cout<<total;

 return 0;

}