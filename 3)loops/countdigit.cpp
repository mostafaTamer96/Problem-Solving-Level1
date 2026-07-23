#include<iostream>
using namespace std;

int main() {
	int num,counter=0,temp=0;
	cin >> num;
    temp=num;       // i put num inside temp, not the opposite

        while(temp!=0){         //since temp is not equal to zero, thereofre,the loop goes on;
            temp=temp+num%10;   //
            temp/=10;
            counter++;

        }
        cout<<counter;


	
	return 0;
}
