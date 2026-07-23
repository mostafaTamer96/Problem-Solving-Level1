#include<iostream>
using namespace std;

int main() {

    for(int i=1;i<=5;i++){  //row  

     for(int j=4;j>=i;j--) //space
        cout<<" ";

        for(int k=1;k<=i;k++){
        cout<<"*"; }
            
        cout<<endl;
    }
    
	return 0;
}
