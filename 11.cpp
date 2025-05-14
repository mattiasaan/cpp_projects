#include <iostream>

using namespace std;

void riordino(int aa, int bb, int cc)
{
	int temp;
	for (int i = 0; i < 10; i++)
	{
		if (aa > bb)
		{
			temp = aa;
			aa = bb;
			bb = temp;
		}
		else if (bb > cc)
		{
			temp = bb;
			bb = cc;
			cc = temp;
		}
	}
	cout << aa << endl
			<< bb << endl
			<< cc << endl;
}

int main()
{
	int a, b, c;
	cout << "dammi 3 numeri" << endl;
	cin >> a >> b >> c;

	riordino(a, b, c);

	return 0;
}
