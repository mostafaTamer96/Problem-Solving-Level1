#include<iostream>
using namespace std; 
int main() {

	int num=5;
   // cin>>num;

    for(int i=5;i>=1;i--){
      //  cout<<"*";
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}