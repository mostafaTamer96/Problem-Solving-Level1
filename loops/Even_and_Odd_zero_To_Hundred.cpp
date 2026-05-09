#include<iostream>
using namespace std;

int main() {
	int user_input,temp_even=0,temp_odd=0;

    for(int i=1;i<=100;i++){
        

        if(i%2==0){
            temp_even++;
            cout<<"this is an even number"<<i<<"   "<<endl;
        }
        else
        temp_odd++;
        cout<<"this is an odd number"<<i<<" "<<endl;


        
    }
    cout<<temp_even<<"is even"<<endl;
    cout<<temp_odd<<"is odd"<<endl;

	return 0;
}
