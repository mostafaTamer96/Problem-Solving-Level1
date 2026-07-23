#include<iostream>
using namespace std;

int main() {
 int number=1,multiplication=5,range;
    

 cout<<"enter a range"<<endl;
    cin>>range;
    for(int i=1;i<=range;++i){

            number=multiplication*i;
        cout<<i<<" x "<<multiplication<<" = "<<number<<endl;

       
        //cout<<number<<endl;

        
    }
 

	return 0;
}
