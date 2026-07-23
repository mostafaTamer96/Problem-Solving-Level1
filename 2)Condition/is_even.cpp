#include<iostream>
using namespace std;

int main() {
    int num,sum=0,tempnum;
    cin>>num;
    
    tempnum=num;


    if(num%2==0){
       
        sum+=tempnum%10;
        tempnum/=10;

    cout<<sum<<endl;
    }

    else if(num%2!=0){
        if(num<1000){
             sum+=tempnum%100;
        tempnum/=100;
    cout<<sum<<endl;
        }

    else if(num%2!=0){
        if(num>1000 && num<1000000){
             sum+=tempnum%1000;
        tempnum/=1000;
    cout<<sum<<endl;
        }



    }

    
	return 0;
    }
