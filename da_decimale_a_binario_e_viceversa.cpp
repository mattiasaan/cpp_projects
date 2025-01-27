#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int binario() {
  int numero;

  cout <<"inserisci il numero binario da convertire" << endl;
  cin >> numero;
  //ps non segue del tutto l'algoritmo perchè l'algoritmo rende le cose inutilmente complesse (mio parere)
  int conver = 0;
  int i = 0;

  while (numero > 0 ) {
    if (numero % 10 != 0) {
      conver = conver + pow(2,i);
    }
    numero = numero /10;

    i++;
  };

  cout <<"il numero inserito in decimale è: " << conver << endl;

  return 0;
}

int decimale() {
  int numero;
  string conver;

  cout <<"inserisci il numero decimale da convertire" << endl;
  cin >> numero;

  while(numero > 0) {
    if (numero % 2 != 0) {
      conver = "1" + conver;
    } else {
      conver = "0" + conver;
    };
  numero /= 2;
  }

  cout << "il numero inserito in binario è: " << conver <<endl;

  return 0;

};

int main() {
  string opzione;
  int lo = 0;

  while(lo < 1) {
    cout << "          benvenuto nel convertitore di numeri          " << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "|    digita b-d per conversione da binario a decimale  |" << endl;
    cout << "|    digita d-b per conversione da decimale a binario  |" << endl;
    cout << "|    digita exit per uscire dal programma              |" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "seleziona l'operazione da eseguire: " << endl;
    cin >> opzione;

    if (opzione == "b-d") {
      cout << "hai scelto la conversione da binario a decimale: " <<endl;
      lo = 1;
      binario();
    } else if (opzione == "d-b") {
      cout << "hai scelto la conversione da decimale a binario: " <<endl;
      lo = 1;
      decimale();
    } else if (opzione != "b-d" || "d-b") {
      cout <<"opzione non valida riprova" << endl;
      lo = 0;
    } else if (opzione == "exit") {
      cout <<"addio" << endl;
      return 0;
    }
  


}

}