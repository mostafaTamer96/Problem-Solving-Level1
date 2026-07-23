#include <iostream>
using namespace std;
int main()
{
    int mo = 0;
    int size = 5;
    int arr[size];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    mo = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < mo)
            mo = arr[i];
    }

    cout << mo;
}