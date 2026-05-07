#include <iostream>
using namespace std;
int main()
{

    int location;
    int step;

    cin >> location;
    step = location;
    location = location / 5;
    step = location % 5;

    cout << step;
}