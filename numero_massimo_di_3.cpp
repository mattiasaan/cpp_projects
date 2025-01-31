#include <iostream>
using namespace std;
int main(){

cout << "dammi 3 numeri: ";

int num;
int Vmax;
int I = 0;

cin >> num;
Vmax = num;

for (I = 1; I< 3; I++) {
	cin >> num;
	if (num > Vmax) {
		Vmax = num;
	}
}

cout << "il numero massimo è: " << Vmax <<endl;
return 0;
}

