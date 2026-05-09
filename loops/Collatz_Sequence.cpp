#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, limit;
    int cnt;
    int i=1;
    long long  k;
    while (cin >> a >> limit && a > 0 && limit > 0) {
    k=a;

        cnt = 1; //who is 
       // long long original = a;

        while (a != 1 && a <= limit) {
            if (a % 2 == 0) {
                a /= 2;
                // whh separeted?{
            } else {
                a = 3 * a + 1;
            }
            //why}?
            if (a <= limit) ++cnt;
        }

        cout<<"Case "<<i++<<": "<<"A = "<<k<<", "<<"limit = "<<limit<<", "<<"number of terms = "
        <<cnt<<endl;
    }

    return 0;
}
