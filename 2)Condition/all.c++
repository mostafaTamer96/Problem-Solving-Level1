//https://vjudge.net/problem/AtCoder-abc212_a/origin
#include <bits/stdc++.h>
using namespace std;

void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){
    speed(); // Call speed() at the beginning
  int a,b;
  cin>>a>>b;

  if(b==0 && a>0)
  cout<<"Gold";
  else if (b>=0 && a==0)
  cout<<"Silver";
  else 
  cout<<"Alloy";
    
}