#include <iostream>
#include <string>

using namespace std;

int main()
{
	string nome = "";
	float voti[5];
	int voto;
	float media;
	string opz = "";
	int loo;

	while (loo < 1000)
	{
		cout << "\033[1;33m********************************\033[0m\n";
		cout << "\033[1;33m*      Gestione Voti      *\033[0m\n";
		cout << "\033[1;33m********************************\033[0m\n";
		cout << "\033[1;33m*      scegli l'opzione      *\033[0m\n";
		cout << " \033[1;32mVisualizzare i voti\033[0m\n";
		cout << " \033[1;32mInserire i voti\033[0m\n";
		cout << " \033[1;31mEsci\033[0m\n";
		cout << "Seleziona un'opzione: ";

		cin >> opz;

		if (opz == "visualizzare")
		{
			cout << nome << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << voti[i] << endl;
			}
			cout << "la media è " << media << endl;
			loo += 1;
		}
		else if (opz == "inserire")
		{
			cout << "dimmi il nome dello studente" << endl;
			cin >> nome;
			loo += 1;

			for (int i = 0; i < 5; i++)
			{
				cout << "inserisci un voto" << endl;
				cin >> voto;
				voti[i] = voto;
				media += voto;
			}
			media = media / 5;
		}
		else if (opz == "esci")
		{
			cout << "arrivederci" << endl;
			loo = 1000;
		}
		else
		{
			cout << "non hai scelto un opzione valida" << endl;
			loo += 1;
		};
	};

	return 0;
}
