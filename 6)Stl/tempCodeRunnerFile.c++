#include<bits/stdc++.h>
using namespace std;
int main(){

   vector<int>math,prog,pe;
   int x;cin>>x;
   for(int i=1;i<=x;i++){

    if(x==1)
    prog.push_back(i);
   // math.pop_back();
    else if (x==2)
    math.push_back(i);
  //  prog.pop_back();
    else  if(x==3)
    pe.push_back(i);
   // pe.pop_back();

   }

   int ans=min(math.size(), prog.size(), pe.size());
   cout<<ans;
    for(int i=0;i<ans;i++){
        cout<<math[i]<<prog[i]<<pe[i];
    }
}
   