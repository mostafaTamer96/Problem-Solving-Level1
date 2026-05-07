#include <iostream>
#include <cmath>
using namespace std;
int main(){
int row,colum,input;
    for(int row=0;row<5;row++){

        for(int colum=0;colum<5;colum++){
            int input;cin>>input;
            
            if(input==1){
            cout<<abs(2-row)+abs(2-colum);}
            
        }
    }
        
}
