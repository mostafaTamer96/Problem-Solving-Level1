//https://vjudge.net/problem/UVA-10783
#include <iostream>
using namespace std;
int main(){

  int test;cin>>test;
  int counter=1;
  int i=0;
  while(test--){
    int a,b;
    cin>>a>>b;
    i=a;
    int sum=0;

    while(i<=b){
    if(i%2==1)
      sum+=i;
      i++;
}
    cout<<"Case "<<counter++<<": "<<sum<<endl;
     
  }
  return 0;
}