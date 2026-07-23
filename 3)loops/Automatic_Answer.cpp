//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2542
#include <iostream>
using namespace std;
int main(){

    int tc=1,n=637;
    int calc;
    cin>>tc;
 int j=0;
 
    while(tc--){
        cin>>n;
   
    calc=(((((((((n*567)/9)+7492)*235)/47)-498))/10)%10);
    if (calc<0)
    calc*=-1;
        
   
    cout<<calc<<endl;


    
    
    }




  return 0;
}