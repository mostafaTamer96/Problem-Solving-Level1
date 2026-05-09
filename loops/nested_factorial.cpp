#include<iostream>
using namespace std;

int main() {
   int factorial=1; 

        for(int i=1;i<=10;i++){

            for(int j=1;j<=i;j++){

                factorial=factorial*j;
            }

        }




        cout<<factorial;

	return 0;
}
