//https://vjudge.net/problem/UVA-11455
#include <iostream>
using namespace std;
int main(){

     long long  testcasses;cin>>testcasses;

    while (testcasses--)
    {
        
        long long s1,s2,s3,s4;cin>>s1>>s2>>s3>>s4;
      
        if(s1 == s2 && s1==s3 && s1==s4)
        cout<<"square"<<endl;
        else if((s1==s3 && s2==s4) || (s1==s2 && s3==s4)|| (s1==s4  && s2==s3))
        cout<<"rectangle"<<endl;
        else  if(s1 + s2 + s3 > s4 && s1 + s2 + s4 > s3 && s1 + s3 + s4 > s2 && s2 + s3 + s4 > s1)
        cout<<"quadrangle"<<endl;
        else
        cout<<"banana"<<endl;
    }
    

   
    
  return 0;
}