#include<iostream>
using namespace std;

int main() {
	int input,grade,sum=0;
    cin>>input;
    //5

    for(int i=1;i<=input;i++){
        cin>>grade;
        sum=sum+grade;
    }
    cout<<sum/input;


	
	return 0;
}
