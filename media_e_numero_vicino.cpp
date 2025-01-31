#include <iostream>

using namespace std;

int main() {
	int num[10], max[10], temp;
	double media;
	
	
	cout <<"inserisci 10 numeri: " <<endl;
	
	for(int i = 0; i<10; i++) {
		cin >> num[i];
		media += num[i];
	} 
	
	media = media /10;
	
	for (int i = 0; i<10; i++) {
		if (num[i] > media) {
			num[i] = max[i];
		}
	}
	
	for (int i = 0; i<9; i++) {
		cout <<max[i] <<endl;
		if (max[i] > max[i+1]) {
			temp = max[i];
			max[i] = max[i+1];
			max[i+1] = temp;
		} else {
				
		}
	}
	
	cout <<"la media è " << media <<endl;
	cout <<"il numero più vicino alla media è " << max[0] <<endl;
}
