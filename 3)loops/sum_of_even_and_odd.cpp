#include<iostream>
using namespace std;

int main() {
    int input,sum_even=0,sum_odd=0;
    for(int i=1;i<=4;i++){
        cin>>input;
        if(input%2==0){
        sum_even+=input;
        }
        else {
            sum_odd+=input;
        }
    }
cout<<"the sum of even "<<sum_even<<endl;
        cout<<"the sum of odd "<<sum_odd<<endl;
	return 0;
}
