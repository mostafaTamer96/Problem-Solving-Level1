//https://codeforces.com/problemset/problem/977/A
#include <iostream>
using namespace std;
int main(){

int num,my=0,times;
cin>>num>>times;

for(int i=1;i<=times;i++){
 if(num %10 !=0)
num--;
else
 num/=10;
my=num;
}
cout<<my;
}
