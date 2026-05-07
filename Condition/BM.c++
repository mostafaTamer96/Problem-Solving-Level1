#include <bits/stdc++.h>
using namespace std;

void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){
    speed(); // Call speed() at the beginning
    int a,b;cin>>a>>b;
    int multiply=a*b;
    int minus=a-b;
    int add=a+b;
    if(multiply>minus && multiply>add)
    cout<<multiply;
    else if (minus>multiply && minus>add)
    cout<< minus;
    else 
    cout<<add;

    
}