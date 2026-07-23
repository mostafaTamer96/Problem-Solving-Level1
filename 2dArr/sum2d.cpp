#include <iostream>
using namespace std;
int main(){

    int a[2][3];
    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }




    int sum=0;
    int average[2];
    for (int i=0;i<2;i++){
        sum=0;
        for(int j=0;j<3;j++){
            sum+=a[i][j];  
        }
        average[i]=sum/3;
        cout<<"the average of student is : "<<average[i]<<endl;
    }
 //  cout<<"the sum is: "<<sum<<endl;
 //   cout<<"the average of student is : "<<average<<endl;


}