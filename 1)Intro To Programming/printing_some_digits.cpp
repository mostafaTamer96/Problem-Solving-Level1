#include<iostream>
using namespace std;

int main() {
    int num;
    cin>>num;

    //1234   5 
    int result= num%10;
    int second_result=num/10;


    second_result%=100;

    //12345
    //123 4


    cout<<result<<endl;
   

    cout<<"--------------"<<endl;
     cout<<second_result<<endl;

	return 0;
}
