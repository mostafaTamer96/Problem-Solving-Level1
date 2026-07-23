#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n][n];

   // arr[i][j]=arr[i-1][j]+arr[i][j-1];
   //max is arr[n-1][n-1]

    for(int i=0;i<n;i++){
            arr[0][i]=1;
            arr[i][0]=1;
    }

      for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){   //to let the ones
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }

    cout<<arr[n-1][n-1];



}
