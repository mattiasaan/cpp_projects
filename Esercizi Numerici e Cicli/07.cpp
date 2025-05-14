#include <iostream>

using namespace std;
int main()
{
	int ragazzi, biglietti;
	int bigliettiAss, bigliettires;

	cout << "numero di ragazzi: ";
	cin >> ragazzi;
	cout << "numero biglietti: ";
	cin >> biglietti;

	bigliettiAss = biglietti / ragazzi;
	bigliettires = biglietti % ragazzi;

	cout << "ogni ragazzo ha " << bigliettiAss << "il resto è " << bigliettires << endl;

	return 0;
}
