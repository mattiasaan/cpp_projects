#include <iostream>
#include <string>

using namespace std;

class studente {
  private:
    string nome;
    int matricola;
    double media;
  public:
    
    studente(string n, int ma, double me) {
      nome = n;
      matricola = ma;
      media = me;
    };
    
    int stampaScheda() {
      cout << nome << matricola << media << endl;
      return 0;
    };
};

int main() {
  string nome;
  int matricola;
  double media;

  cout << "dammi un nome" << endl;
  cin >>  nome;
  cout << "un numero di matricola" << endl;
  cin >> matricola;
  cout << "e la media" << endl;
  cin >> media;

  studente studente1(nome, matricola, media);
  studente1.stampaScheda();
}