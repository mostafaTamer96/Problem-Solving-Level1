#include <iostream>
using namespace std;

float averge(double score1, double score2, double score3){
    return (score1+score2+score3)/3.0;
}

char mark(int average){
 char degree;
        if(average>=90)
        degree='A';
        if(average>=80)
        degree='B';
        if(average>=70)
        degree='C';
        if(average>=60)
        degree='D';
        else
        degree='F';
}


void printing(string name, int score1,int score2,int score3){
    double score=(score1+score2+score3)/3.0;
    cout<<"Name:"<<name;
   cout<<"Average score:"<<score<<endl;
   cout<<"Degree:"<<mark(score)<<endl; 


}


int main(){

int numOfstudents;
cin>>numOfstudents;

    for(int i=0;i<numOfstudents;i++){
        string name;
        cin>>name;

        int score1,score2,score3;
        cin>>score1>>score2>>score3;
       
        printing( name,  score1, score2, score3);


  

    }




}