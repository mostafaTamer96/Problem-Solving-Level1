#include<iostream>
using namespace std;

int main() {
	int Num;
	cin >> Num;
                //
	int counter = 0,current_number = 0;

	while (counter < Num) {
		if (current_number % 3 == 0 && current_number % 4 != 0) {   
			cout << current_number << " ";
			counter++;
		}
      

		current_number++;
	}
	return 0;
}
