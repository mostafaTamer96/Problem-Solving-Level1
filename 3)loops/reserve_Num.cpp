#include<iostream>
using namespace std;

int main() {
	int num,temp=0,another=0;
	cin >> num;
    temp=num;       

        while(temp!=0){        
           
        
        another=another*10+temp%10;
                    temp/=10;
        }
        cout<<another;
	return 0;
}
