#include <iostream>
using namespace std;
int main(){
int NumeroDec;
string Binario = "";

cout << "inserisci un numero da convertire in binario: "<<endl;
cin >> NumeroDec;

while (NumeroDec > 0) {
	if (NumeroDec % 2 == 0) {
		Binario = "0" + Binario;
		NumeroDec = NumeroDec /2;
	}
	else {
		Binario = "1" + Binario;
		NumeroDec = NumeroDec /2;
	}
		
}
	
	
cout <<Binario <<endl;

return 0;
}
