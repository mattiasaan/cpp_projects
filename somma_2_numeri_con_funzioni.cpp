#include <iostream>
using namespace std;

int somma(int num1v, int num2v) {
	int somma;
	somma = num1v + num2v;
	return somma;
};

int main(){
	int num1, num2, bho;
	
	cout <<"dammi 2 numeri" << endl;
	cin >> num1;
	cin >> num2;
	
	bho = somma(num1, num2);
	
	cout << bho << endl;

return 0;
}

