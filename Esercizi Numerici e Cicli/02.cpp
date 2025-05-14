#include <iostream>
#include <string>
using namespace std;
int main()
{
	int Numero;
	int risultato = 0;

	cout << "inserisci il numero: " << endl;
	cin >> Numero;

	while (Numero > 0)
	{
		risultato = risultato + 2;
		cout << risultato << endl;
		Numero = Numero - 2;
	};

	return 0;
};
