   #include <iostream>
   #include <cmath>
   #include <iomanip>
   using namespace std;

   int main()
   {
      int x1, x2, y1, y2;
      while (cin >> x1 >> y1 >> x2 >> y2 && x1, x2, y1, y2)
      {
         int xs = x2 - x1;
         int ys = y2 - y1; //   xs<0 && ys<0||
         // if(xs>0 && ys<0|| xs<0 && ys>0|| xs>0 && ys>0 )

         if (xs == 0 && ys == 0)
         cout << 0 << endl;
      

        else  if ((x1 == x2) || (y2 == y1)  || (abs(xs) == abs(ys)))
                        
            cout << 1 << endl;
         else
            cout << 2 << endl;

         // 4 4 6 2
      }

      return 0;
   }
