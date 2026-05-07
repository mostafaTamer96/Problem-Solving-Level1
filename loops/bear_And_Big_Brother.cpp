#include <iostream>
using namespace std;
int main(){
int limak,bob,counter=0;

cin>>limak>>bob;

for(int i=0;limak<=bob;i++){
limak*=3;
bob*=2;
counter++;

}
cout<<counter;
}
