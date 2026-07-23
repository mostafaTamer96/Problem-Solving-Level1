#include <iostream>
using namespace std;
int main(){
    
    int n,m;
    cout<<"2 x 2"<<endl;
    cin>>n>>m;
    int a[2][2];

   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];

        }
    }
    int sum=1;
     for(int i=0;i<n;i++){
         sum=1;
        for(int j=0;j<m;j++){  
           
            sum=sum*a[i][j];
        }
                  cout<<"the sum of marks in "<<i<<" = "<<sum<<endl; 

    }



}