#include <iostream>
using namespace std;

int rangeSumming(int begin, int end)
{
    if (begin == end)
        return end;

    else
        return end + rangeSumming(begin, end - 1);
}

int main()
{
    cout << "asd" << endl;
    cout << rangeSumming(4, 6);
}