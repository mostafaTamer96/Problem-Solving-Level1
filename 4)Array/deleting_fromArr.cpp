#include<iostream>
using namespace std;
int main(){

int size=5;
int element,index=0;
int arr[size]={10,20,30,40,50};

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"Eneter the number that you want to delete: "<<endl;
cin>>element;

for(int i=0;i<size;i++){
    if(element==arr[i]){
        index=i;
    }
}

    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
 size--;


 for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
 }

}