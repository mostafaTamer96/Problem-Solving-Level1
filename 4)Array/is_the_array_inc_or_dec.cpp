#include <iostream>

using namespace std;

int main(){

    const int size=5;
    int num[size];
    for(int i=0;i<size;i++)
    cin>>num[i];

    bool isAsending = true;
    for(int i=0;i<size-1;i++){
        if(num[i]>num[i+1]){
    isAsending=false;
    break;
    }}

    if(isAsending)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    
 return 0;

}