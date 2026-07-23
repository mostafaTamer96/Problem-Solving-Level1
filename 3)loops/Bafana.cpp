//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2905

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
 int n,cnt=1;
 cin>>n;

 while(n--){
    int m,k,p;cin>>m>>k>>p;
    int ans;

    
    ans=(k+p)%m;
    if(ans==0)
    ans=m;



    cout<<"Case "<<cnt++<<": "<< ans<<endl;
 }
   return 0;
}
