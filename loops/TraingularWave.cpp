    #include <bits/stdc++.h>
    using namespace std;

    int main()
// explain the bools
    {
        int tc;cin>>tc;
        bool bl1=false;
        while(tc--){
            // because the bool was false, it will skip the endl; in the 1st itteration
            if(bl1) cout<<endl;
            bl1=true;
            // since it has become true therefore it will print the endl;
            

        int n,f;cin>>n>>f;
        // i dind't get bl2

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
