#include<iostream>
using namespace std;

int main() {
	int user_input,average=0;
    //cin>>user_input;
    for(int i=1;i<=5;i++){
        cin>>user_input;
        average+=user_input;
    }
                        // type casting
   cout<<"the average is "<<(double)average/5;
    
        


	return 0;
}
