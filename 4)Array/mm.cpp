#include <iostream>
using namespace std;
int main(){

  int size=5;
  int element,index;
  int arr[size]={10,20,30,50,40};

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  cout<<"element: ";
  cin>>element;
  cout<<"index: ";
  cin>>index;

  if(index>size)
  cout<<"invalid"<<endl;
  else{
    for(int i=size;i>index;i--){
        arr[i]=arr[i-1];
        // cout<<arr[i]<<" ";
    }
    arr[index]=element;
      size++;
    }

    
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }


}