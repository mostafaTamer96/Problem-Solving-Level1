#include <iostream>
using namespace std;
int main(){


  const int size=5;

  int num[size];
  for(int i=0;i<size;i++){
    cin>>num[i];
  }

  int min=num[0];
  for(int i=0;i<size;i++){
    if(min>num[i])
      min=num[i];

  }
  cout<<min;


    return 0;
}