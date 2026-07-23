#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
    string input;
    cin >> input;

    transform(input.begin(), input.end(), input.begin(), [](unsigned char c) { return toupper(c); });

    cout << input;

    return 0;
}