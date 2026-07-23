#include<iostream>
using namespace std;

int main() {
    int num,sum=0,counter=0;
    cin>>num;

    int temp=num;
    while(temp!=0){
        sum=sum+temp%10;
        temp/=10;
counter++;
    }
    cout<<counter;
	return 0;
    }


