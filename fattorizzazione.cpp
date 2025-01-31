#include <iostream>
using namespace std;

int main(){

int num;
int fattore = 1;

cout << "dammi un numero da fattorizzare: ";
cin >>num;

for (int i = 1; i<= num; i++) {
	fattore = fattore * i;
	cout <<"il fattoriale parziale è:" <<fattore <<endl;
	
}

cout <<"il fattoriale è:" <<fattore <<endl;


return 0;
}
