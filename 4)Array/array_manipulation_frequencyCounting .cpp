#include <iostream>
#include <algorithm> 
using namespace std;

int main(){ 
   
   int n;cin>>n;
        int arr[n];
        int m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
           
        }
         sort(arr,arr+n);
    int counter=0;
    int a;
         for(int i=0;i<n;i++){
           a=  count(arr,arr+n,n);
            cout<<arr[i]<<" ";
            

        }
      cout<<a;


    return 0;
}