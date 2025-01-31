#include <iostream>
using namespace std;
int main(){

cout << "dammi 10 numeri: ";

int num;
int Vmax;
int Vmin;
int media;
int I = 0;

cin >> num;
Vmax = num;
Vmin = num;

for (I = 1; I< 10; I++) {
	cin >> num;
	if (num > Vmax) {
		Vmax = num;
	} else if (num<Vmin) {
		Vmin = num;
	}
}

media = (Vmax + Vmin)/2;

cout << "il numero massimo è: " << Vmax <<endl;
cout << "il numero minimo é: " <<Vmin <<endl;
cout << "la media dei due numeri é: " <<media <<endl;

return 0;
}
