#include <bits/stdc++.h>
using namespace std;
int main(){
    
    // size, push_back , pop_back ,empty ,capacity
    // 
    // name is v, it has 6 ten's in it
    vector<int>v(6,10);
    
    cout<<"size:"<<v.size()<<endl;
    v.pop_back();
    cout<<v[5]<<"\n";//10
    //the number to be added is 3
    v.push_back(3);
    cout<<v[5]<<"\n";//10

    cout<<v.empty()<<endl;
    cout<<"capacity:"<<v.capacity();







}

