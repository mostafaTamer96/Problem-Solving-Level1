//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2762
#include <iostream>


#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int cnt = 1;
    
    int tc;
    while (cin >> tc && tc)
    {
        double u, v, a, t, s;

        cout << fixed << setprecision(3);
        if (tc == 1)
        {
            double u, v, t;
            cin >> u >> v >> t;
            double a = (v - u) / t;
            double s;
            s = ((u + v) / 2.0) * t;

            cout << "Case " << cnt++ << ": " << s << " " << a << endl;
        }
        else if (tc == 2)
        {
            cin >> u >> v >> a;
            double s;
            s = ((v * v) - (u * u)) / (2 * a);
            double t = (v - u) / a;
            cout << "Case " << cnt++ << ": " << s << " " << t << endl;
        }
        else if (tc == 3)
        {
            cin >> u >> a >> s;
          
            double v = sqrt((u * u) + (2 * a * s));
            double t = (v - u) / a;
            cout << "Case " << cnt++ << ": " << v << " " << t << endl;
        }
        else if (tc == 4)
        {
            cin >> v >> a >> s;
           
            double u = sqrt((v * v) - (2 * a * s));
            double t = (v - u) / a;
            cout << "Case " << cnt++ << ": " << u << " " << t <<    endl;
        }
    }

    return 0;
}

// 1 10 5 2.0
// 1 5 10 .02
// 2 10 11 2
// 3 5 1 6
// 4 5.0 -1 6