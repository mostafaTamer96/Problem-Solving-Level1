#include<iostream>
using namespace std;
int main(){

const int s =5;
int arr[s] = {100,200,200,500,10};
long long sum=1;
    for(int i=0;i<s;i++){
        sum=sum*arr[i];
    }
cout<<sum;

}