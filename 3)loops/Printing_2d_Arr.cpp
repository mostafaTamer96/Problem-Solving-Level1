#include <iostream>
using namespace std;
int main(){
    int n,m;cin>>n>>m;

    int arr[n][m];

    for(int row=0;row<n;row++){
        for(int column=0;column<m;column++){
            cin>>arr[row][column];
        }
    }

    
    for(int row=0;row<n;row++){
        for(int column=0;column<m;column++){
            cout<<arr[row][column];
        }
        cout<<endl<<" ";
    }



}
