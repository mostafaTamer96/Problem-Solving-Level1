//https://codeforces.com/problemset/problem/282/A
#include <iostream>
using namespace std;
int main(){

int in,counter=0;
string me;
cin>>in;
for(int i=1;i<=in;i++){
cin>>me;    

if(me =="X++"||me =="++X")
counter++;

else if (me =="X--"|| me=="--X")
counter--;
}
cout<<counter;


}
