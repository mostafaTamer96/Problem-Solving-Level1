#include <iostream>
using namespace std;
int main(){
int a,b,c,n_times;
cin>>a>>b>>c>>n_times;
int ex1,ex2,ex3;

ex1=(a*2)+b+c;
ex2=(b*2)+a+c;
ex3=(c*2)+a+b;

if(ex1>=ex2 && ex1>=ex3)
cout<<ex1*n_times;
else if (ex2>=ex1 && ex2>=ex3)
cout<<ex2*n_times;
else cout<<ex3*n_times;



}