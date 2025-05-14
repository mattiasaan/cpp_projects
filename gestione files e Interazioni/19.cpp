#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class ContoBancario
{
private:
  double saldo;
  string intestatario;

public:
  ContoBancario(double s, string i)
  {
    saldo = s;
    intestatario = i;
  }

  void deposita()
  {
    double numero;
    cout << "Quanto vuoi depositare? ";
    cin >> numero;
    saldo += numero;
    cout << "Hai depositato " << numero << "€" << endl;
    salvaFile();
  }

  void preleva()
  {
    double numero;
    cout << "Quanto vuoi prelevare? ";
    cin >> numero;
    if (numero > saldo)
    {
      cout << "Saldo insufficiente!" << endl;
    }
    else
    {
      saldo -= numero;
      cout << "Hai prelevato " << numero << "€" << endl;
      salvaFile();
    }
  }

  void visualizzaSaldo()
  {
    cout << "Il saldo di " << intestatario << " è di " << saldo << "€" << endl;
  }

  void salvaFile()
  {
    ofstream file("conto.txt");
    if (file.is_open())
    {
      file << intestatario << endl;
      file << saldo << endl;
      file.close();
    }
    else
    {
      cout << "Errore nel salvataggio su file." << endl;
    }
  }

  static ContoBancario caricaDaFile()
  {
    ifstream file("conto.txt");
    string nome;
    double s;
    if (file.is_open())
    {
      getline(file, nome);
      file >> s;
      file.close();
      return ContoBancario(s, nome);
    }
    else
    {
      cout << "File non trovato. Inserisci un nuovo conto." << endl;
      cout << "Nome intestatario: ";
      cin >> nome;
      cout << "Saldo iniziale: ";
      cin >> s;
      ContoBancario nuovo(s, nome);
      nuovo.salvaFile();
      return nuovo;
    }
  }
};

int main()
{
  ContoBancario conto1 = ContoBancario::caricaDaFile();

  string risposta;
  while (true)
  {
    cout << "Cosa vuoi fare?? (prelevare, depositare, saldo, esci): ";
    cin >> risposta;

    if (risposta == "prelevare")
    {
      conto1.preleva();
    }
    else if (risposta == "depositare")
    {
      conto1.deposita();
    }
    else if (risposta == "saldo")
    {
      conto1.visualizzaSaldo();
    }
    else if (risposta == "esci")
    {
      break;
    }
    else
    {
      cout << "Comando sbagliato" << endl;
    }
  }

  return 0;
}
