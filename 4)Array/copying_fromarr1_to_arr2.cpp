#include<iostream>
using namespace std;
int main(){
int arr1[4]={10,20,30,40};
int arr2[4];
cout<<"****arr1****"<<endl;
    for(int i=0;i<4;i++)
    cout<<arr1[i]<<" ";

    cout<<endl;

        cout<<"****arr2****"<<endl;
    for(int i=0;i<4;i++){
        arr2[i]=arr1[i];
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

      cout<<"****arr1****"<<endl;
    for(int i=0;i<4;i++){
        // arr2[i]=arr1[i];
        cout<<arr1[i]<<" ";
    }



}