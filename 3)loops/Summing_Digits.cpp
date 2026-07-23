//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2307
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    while(cin>>n && n){
    while(n>9){
    int sum=0;
    while(n!=0){
    sum+=n%10;
    n=n/10;
    }
     n=sum;
}
    cout<<n<<endl;
}
   
return 0;
}
