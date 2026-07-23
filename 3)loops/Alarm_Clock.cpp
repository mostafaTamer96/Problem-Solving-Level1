//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2724
#include <iostream>
using namespace std;
int main(){

   int h1,m1,h2,m2;
   while (true)
   {
   cin>>h1>>m1>>h2>>m2;
   if(h1==0 && m1==0 && h2==0 && m2==0)
   break;
      
   int cm=(h1*60)+m1;
   int am=(h2*60)+m2;
   
   if(cm>am)
   am+=1440;

   int sm=am-cm;
      cout<<sm<<endl;
   }
  return 0;
}