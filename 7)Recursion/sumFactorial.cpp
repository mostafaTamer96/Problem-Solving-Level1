#include <iostream>
using namespace std;

int summing(int n)
{
    if (n == 1)
        return 1;
else
        return n+summing(n-1);
}

int main()
{
    cout<<"asd"<<endl;
    cout<<summing(5);
}