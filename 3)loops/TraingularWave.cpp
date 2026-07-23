//https://vjudge.net/problem/UVA-488
#include <bits/stdc++.h>
    using namespace std;

    int main()

    {
        int tc;cin>>tc;
        bool bl1=false;
        while(tc--){
           
           
            if(bl1) cout<<endl;
            bl1=true;
           

        int n,f;cin>>n>>f;
      

        bool bl2=false;
        while(f--){
            if(bl2) cout<<endl;
            bl2=true;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
        cout<<i;
    }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }

        }
    }
        return 0;
    }
