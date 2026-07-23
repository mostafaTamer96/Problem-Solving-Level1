#include <iostream>
using namespace std;
int main()
{

    int input, counter = 0, me = 0;
    cin >> input;
    
    while (input >= me)
    {
        if (counter % 3 == 0 && counter % 4 != 0)
        {
            cout << counter << " ";
            me++;
        }

        counter++;
       
    }
}
