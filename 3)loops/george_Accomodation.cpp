//https://codeforces.com/problemset/problem/467/A
#include <iostream>
using namespace std;
int main(){
int people_living,capacity,x,counter=0;
cin>>x;

for(int i=1;i<=x;i++){
cin>>people_living>>capacity;
if( capacity - people_living >=2)
counter++;

}
cout<<counter;
}