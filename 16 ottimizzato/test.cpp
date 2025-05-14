#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <ctime>

using namespace std;

const int NUM_DOMANDE = 10;
const int NUM_RISPOSTE_PER_DOMANDA = 4;

void initRandom()
{
  srand(time(0));
}

vector<string> leggiFile(const string nomeFile)
{
  ifstream file(nomeFile);
  if (!file.is_open())
  {
    cerr << "Errore nell'aprire il file: " << nomeFile << endl;
    return {};
  }

  vector<string> righe;
  string linea;
  while (getline(file, linea))
  {
    righe.push_back(linea);
  }
  return righe;
}

bool poniDomanda(const vector<string> domande, const vector<string> risposte, int indice, char rispostaCorretta)
{
  cout << "     " << endl;
  cout << "Domanda: " << domande[indice] << endl;

  for (int i = 0; i < NUM_RISPOSTE_PER_DOMANDA; ++i)
  {
    cout << risposte[indice * NUM_RISPOSTE_PER_DOMANDA + i] << endl;
  }

  cout << "Risposta: ";
  char rispostaUtente;
  cin >> rispostaUtente;

  if (rispostaUtente == rispostaCorretta)
  {
    cout << "Risposta corretta" << endl;
    return true;
  }
  else
  {
    cout << "Risposta errata" << endl;
    return false;
  }
}

void visualizzaResoconto()
{
  string sistema;
  cout << "Su quale sistema operativo stai eseguendo il programma?" << endl;
  ;
  cout << "0: Linux" << endl
       << "1: Windows" << endl
       << "Scelta: ";
  cin >> sistema;

  if (sistema == "0")
  {
    system("gedit resoconto.txt &");
  }
  else if (sistema == "1")
  {
    system("start resoconto.txt");
  }
  else
  {
    cout << "Sistema operativo non riconosciuto" << endl;
  }
}

void eseguiTest()
{
  vector<string> domande = leggiFile("domande.txt");
  vector<string> risposte = leggiFile("risposte.txt");

  if (domande.empty() || risposte.empty())
  {
    cerr << "Errore nel caricamento delle domande o delle risposte" << endl;
    return;
  }

  ofstream resoconto("resoconto.txt", ios::app);
  if (!resoconto.is_open())
  {
    cerr << "Errore nell'aprire resoconto." << endl;
    return;
  }

  vector<int> ordineDomande(NUM_DOMANDE);
  iota(ordineDomande.begin(), ordineDomande.end(), 0);
  random_shuffle(ordineDomande.begin(), ordineDomande.end());

  const vector<char> risposteCorrette = {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', 'a', 'a'};
  int punteggio = 0;

  for (int indice : ordineDomande)
  {
    if (poniDomanda(domande, risposte, indice, risposteCorrette[indice]))
    {
      ++punteggio;
    }
  }

  resoconto << "Punteggio: " << punteggio << "/" << NUM_DOMANDE << endl;
  resoconto.close();

  cout << "     " << endl;
  cout << "Test completato" << endl;
  visualizzaResoconto();
}

void inizioTest()
{
  ofstream resoconto("resoconto.txt");
  if (!resoconto.is_open())
  {
    cerr << "Errore nell'aprire resoconto" << endl;
  }

  string nome, cognome, classe;
  cout << "Inserisci il tuo nome: ";
  cin >> nome;
  cout << "Inserisci il tuo cognome: ";
  cin >> cognome;
  cout << "Inserisci la tua classe: ";
  cin >> classe;
  cout << "     " << endl;

  resoconto << "Nome del candidato: " << nome << endl;
  resoconto << "Cognome del candidato: " << cognome << endl;
  resoconto << "Classe del candidato: " << classe << endl;
  resoconto.close();

  eseguiTest();
}

int main()
{
  initRandom();
  cout << "Benvenuto nel test più difficile al mondo!\n";

  string scelta;
  while (true)
  {
    cout << endl
         << "Cosa vuoi fare?" << endl
         << "Test" << endl
         << "Exit" << endl
         << "Scelta: ";
    cin >> scelta;

    if (scelta == "Test" || scelta == "test")
    {
      inizioTest();
      break;
    }
    else if (scelta == "Exit" || scelta == "exit")
    {
      cout << "Arrivederci!" << endl;
      break;
    }
    else
    {
      cout << "Scelta non valida. Riprova." << endl;
    }
  }

  return 0;
}
