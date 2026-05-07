#include <iostream>
using namespace std;
int main(){

int box,removed_balls,added_balls,total=0;
cin>>box>>removed_balls>>added_balls;

    total=box-removed_balls;
    total+=added_balls;

    cout<<total;


}