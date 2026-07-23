#include <iostream>
using namespace std;

//  function to calculate the average
// function ro calculate the degree
//  function to putput the studetn

float average_score(double score1, double score2, double score3)
{
    return (score1 + score2 + score3) / 3.0;
}
char claculate_degree(double score)
{
    char degree;
    if (degree >= 90)
        degree = 'A';
    else if (degree >= 80)
        degree = 'B';
    else if (degree >= 70)
        degree = 'C';
    else if (degree > 60)
        degree = 'D';
    else
        degree = 'F';

    return degree;
}

void print(string name, double score1, double score2, double score3)
{

    cout << "Name:" << name << endl;
    cout << "Avergae score:" << score << endl;
    cout << "Degree:" << claculate_degree(score) << endl;
}

int main()
{
    int numof_students;
    cin >> numof_students;
    for (int i = 0; i < numof_students; i++)
    {

        string name;
        cin >> name;
        int score1, score2, score3;
        cin >> score1 >> score2 >> score3;

        print(name, score1, score2, score3);

        double score = average_score(score1, score2, score3);
    }
}
