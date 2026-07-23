#include<bits/stdc++.h>
using namespace std;
int main(){


    int n;cin>>n;
    vector<int>pos,neg,zero;
    int x;
    for(int i=0;i<n;i++){
    cin>>x;

    if(x>0)
    pos.push_back(x);

    else if(x<0)
    neg.push_back(x);
    else
    zero.push_back(x);
    }
    vector<int>ans1,ans2,ans3;

    ans1.push_back(neg.back());
    neg.pop_back();
    
    if(pos.empty()){
    ans2.push_back(neg.back());
    neg.pop_back();
    ans2.push_back(neg.back());
    neg.pop_back();
    }
    else{
    ans2.push_back(pos.back());
    pos.pop_back(); }
    //----------------------------------------------------
    //didn't understand this
    ans3.swap(zero);
   
   for(int x:pos)
   ans3.push_back(x);

   for(int x:neg)
   ans3.push_back(x);

    cout<<ans1.size()<<" ";
    for(int x:ans1)
    cout<<x<<" "<<endl;

    cout<<ans2.size()<<" ";
    for(int x:ans2)
    cout<<x<<" ";
cout<<endl;

    cout<<ans3.size()<<" ";
    for(int x:ans3)
    cout<<x<<" ";



}
   