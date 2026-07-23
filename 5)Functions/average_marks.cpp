#include <iostream>
using namespace std;


string student(string name){
    
    return name;
}

    double average ( double x, double y, double z){
        double sum=x+y+z;
        return sum/3;
    }

    void degree(double mark){
       
    if(mark>=90)
    cout<< 'A';
   else  if(mark>=80)
    cout<< 'B';
    else if(mark>=70)
    cout<< 'C';
    else if(mark>=60)
    cout<< 'd';
     else
    cout<< 'f';

    }


int main(){ 
    string s1;
    double m1,m2,m3;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>s1;
        cin>>m1>>m2>>m3;
        double avg = average(m1,m2,m3);
        
        
        cout<<student(s1);
         cout<<" ";
        degree(avg);
        cout<<endl;
       
    }




    return 0;
}