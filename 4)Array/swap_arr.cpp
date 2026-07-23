#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr1[5]={2,3,4,7,6};
    int arr2[5]={8,5,1,4,9};
    int temp_arr[5];

    for (int i = 0; i < size; i++){
        temp_arr[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp_arr[i];    
}
    //int arr1[5]={2,3,4,7,6};
    //int arr2[5]={8,5,1,4,9};
    cout<<"Arr1[]= ";
      for (int i = 0; i < size; i++){
        cout<<arr1[i]<<" ";
}
cout<<endl;
cout<<"Arr2[]= ";
for (int i = 0; i < size; i++){
        cout<<arr2[i]<<" ";
}
    return 0;
}