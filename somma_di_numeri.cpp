#include <iostream>
using namespace std;
int main ()
{
  int numeri = 10;
  int numero;
  int somma = 0;

  cout <<"dammi " << numeri <<" da sommare: " << endl;

  for(int i=0; i<numeri; i++) {
    cin >> numero;
    somma += numero;
  }

  cout <<"la somma dei numeri è " << somma <<endl;


  return 0; 
}