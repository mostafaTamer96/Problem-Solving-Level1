#include <iostream>
#include <cmath>
using namespace std;
int main(){

// int ex1,ex2,ex3;

// ex1=(a*2)+b+c;
// ex2=(b*2)+a+c;
// ex3=(c*2)+a+b;

// // the matter is over here, i don't want the whole answer *2, just the biggest
// if(ex1>=ex2 && ex1>=ex3 )
// {
// cout<<ex1;

//      if(ex1>=ex2 && ex1>=ex3 ){
//           cout<<ex1*k;
//      }



// }
// else if (ex2>=ex1 && ex2>=ex3)
// {
// cout<<ex2;}

// if(ex2>=ex1 && ex2>=ex3){
//      cout<<ex2*k;

// }

// else
// {
//      if(ex3>=ex2 && ex3>=ex1){
//      cout<<ex2*k;
//      // cout<<ex3;
// }

// }



int a,b,c,k;
cin>>a>>b>>c>>k;

if(a>=b && a>=c){
cout<<a*pow(2,k)+b+c;


}
else if(b>=c && b>=a){
     cout<<b*pow(2,k)+a+c;
}

else{
 cout<<c*pow(2,k)+a+b;
}




}