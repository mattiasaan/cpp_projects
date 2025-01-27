#include <iostream>
using namespace std;
int main ()
{
  int numero;
  int somma;
  float media;

  cout <<"dammi 10 numeri a cui fare la media: " << endl;

  for(int i=0; i < 10; i++) {
    cin >> numero;
    somma += numero;
  }

  media = float(somma) / 10;

  cout <<"la media calcolata è" <<media <<endl;

  return 0; 
}