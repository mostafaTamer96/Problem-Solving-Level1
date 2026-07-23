#include<bits/stdc++.h>
using namespace std;
int main(){
int n,counter=0;cin>>n;
int arr[n];
string text;
cin>>text;
    for(int i=0;i<n;i++){
        if(text[i]==text[i+1])
        counter++;
    }

cout<<counter;



} 