#include <iostream>
using namespace std;
int main(){
    int sum_diagonal;
    int matrix[5][3];
    for(int row=0;row<3;row++){
        for(int colum=0;colum<3;colum++){
            cin>>matrix[row][colum];
        }
    }

    int sum=0;
      for(int row=0;row<3;row++){
        for(int colum=0;colum<3;colum++){
            sum+=matrix[row][colum];
           if(row==colum)
          sum_diagonal+=matrix[row][colum];

        }
    }
    cout<<"the sum is equal to :"<<sum<<endl;
    cout<<"the diagonal sum is :"<<sum_diagonal;
}