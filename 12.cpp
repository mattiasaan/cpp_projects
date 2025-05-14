#include <iostream>
#include <string>
using namespace std;
int main()
{
	int NumeroDec;
	int NumeroVir;
	string Binario = "";
	string Virgola = "";
	int perf = 6;

	cout << "inserisci un numero da convertire in binario: " << endl;
	cin >> NumeroDec;

	cout << "Inserisci la virgola del numero da convertire: " << endl;
	cin >> NumeroVir;

	while (NumeroDec > 0)
	{
		if (NumeroDec % 2 == 0)
		{
			Binario = "0" + Binario;
			NumeroDec = NumeroDec / 2;
		}
		else
		{
			Binario = "1" + Binario;
			NumeroDec = NumeroDec / 2;
		}
	}
	cout << Binario << ",";
	while (perf > 0)
	{
		if (NumeroVir * 2 >= 1)
		{
			Virgola = "1" + Virgola;
			NumeroVir = NumeroVir * 2;
		}
		else
		{
			Virgola = "0" + Virgola;
			NumeroVir = NumeroVir * 2;
		}
	}

	cout << Virgola << endl;

	return 0;
}
