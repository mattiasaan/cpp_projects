#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

void initmy_Random()
{
    srand(time(0));
}

int fineTest()
{
    string opz;
    int sist;

    cout << "complimenti ha completato il test più difficile al mondo!!" << endl;
    cout << "se vuoi visualizzare il file con la valutazione digita file" << endl;
    cout << "se vuoi uscire digita exit" << endl;
    cin >> opz;
    if (opz == "file")
    {
        cout <<"su quale sistema operativo sei? " <<endl;
        cout << "0: linux" << endl << "1: windows" << endl;
        cin >> sist;
        if (sist == 0) {
            // :)
            cout << "forse non la scelta migliore ma va bene se te l'hanno imposto" << endl;
            system("gedit resoconto.txt &");
        } else if (sist == 1) {
            system("start resoconto.txt");
        }
        
    }
    else if (opz == "exit")
    {
        return 0;
    }
    else if (opz != "file" || "exit")
    {
        cout << "non hai digitato un opzione corretta quindi uscirai dal programma senza vedere il file arrivederci" << endl;
        return 0;
    };
    return 0;
};

int my_random()
{
    ifstream file("domande.txt");
    if (!file.is_open())
    {
        cout << "Errore nell'aprire il file delle domande." << endl;
        return 1;
    };

    ifstream file2("risposte.txt");
    if (!file2.is_open())
    {
        cout << "Errore nell'aprire il file delle risposte." << endl;
        return 1;
    };

    ofstream file3("resoconto.txt", ios::app);
    if (!file3.is_open())
    {
        cout << "Errore nell'aprire il file del resoconto." << endl;
        return 1;
    };

    string linea;
    vector<int> numeri;

    for (int i = 0; i < 10; i++)
    {
        numeri.push_back(i);
    };

    random_shuffle(numeri.begin(), numeri.end());

    int contatore = 1;
    int contatore2 = 1;
    string ref;
    int risposta = 0;

    for (int i = 0; i < numeri.size(); i++)
    {
        int numero = numeri[i];
        cout << "domanda " << i + 1 << ": " << endl;

        file.clear();
        file.seekg(0);

        file2.clear();
        file2.seekg(0);

        switch (numero)
        {
        case 0:
            contatore = 1;
            while (getline(file, linea))
            {
                if (contatore == 1)
                {
                    cout << linea << endl;
                    cout << " " << endl;
                    break;
                };
                contatore++;
            };
            contatore2 = 1;
            while (getline(file2, linea))
            {
                for (int i = 1; i < 4; i++)
                {
                    if (contatore2 == i)
                    {
                        cout << linea << endl;
                        break;
                    };
                };

                contatore2++;
            };
            cout << " " << endl;
            cin >> ref;
            if (ref == "a")
            {
				cout << "la risposta è corretta complimenti" << endl;
                risposta += 1;
            };
            break;
        case 1:
            contatore = 1;
            while (getline(file, linea))
            {
                if (contatore == 2)
                {
                    cout << linea << endl;
                    cout << " " << endl;
                    break;
                }
                contatore++;
            }
            contatore2 = 1;
            while (getline(file2, linea))
            {
                for (int i = 5; i < 9; i++)
                {
                    if (contatore2 == i)
                    {
                        cout << linea << endl;
                        break;
                    }
                }
                contatore2++;
            }
            cout << " " << endl;
            cin >> ref;
            if (ref == "b")
            {
				cout << "la risposta è corretta complimenti" << endl;
                risposta += 1;
            };
            break;
        case 2:
            contatore = 1;
            while (getline(file, linea))
            {
                if (contatore == 3)
                {
                    cout << linea << endl;
                    cout << " " << endl;
                    break;
                }
                contatore++;
            }
            contatore2 = 1;
            while (getline(file2, linea))
            {
                for (int i = 9; i < 13; i++)
                {
                    if (contatore2 == i)
                    {
                        cout << linea << endl;
                        break;
                    }
                }

                contatore2++;
            }
            cout << " " << endl;
            cin >> ref;
            if (ref == "c")
            {
				cout << "la risposta è corretta complimenti" << endl;
                risposta += 1;
            };
            break;
        case 3:
            contatore = 1;
            while (getline(file, linea))
            {
                if (contatore == 4)
                {
                    cout << linea << endl;
                    cout << " " << endl;
                    break;
                }
                contatore++;
            }
            contatore2 = 1;
            while (getline(file2, linea))
            {
                for (int i = 13; i < 17; i++)
                {
                    if (contatore2 == i)
                    {
                        cout << linea << endl;
                        break;
                    }
                }
                contatore2++;
            }
            cout << " " << endl;
            cin >> ref;
            if (ref == "d")
            {
				cout << "la risposta è corretta complimenti" << endl;
                risposta += 1;
            };
            break;
        case 4:
            contatore = 1;
            while (getline(file, linea))
            {
                if (contatore == 5)
                {
                    cout << linea << endl;
                    cout << " " << endl;
                    break;
                }
                contatore++;
            }
            contatore2 = 1;
            while (getline(file2, linea))
            {
                for (int i = 17; i < 21; i++)
                {
                    if (contatore2 == i)
                    {
                        cout << linea << endl;
                        break;
                    }
                }
                contatore2++;
            }
            cout << " " << endl;
            cin >> ref;
            if (ref == "a")
            {
				cout << "la risposta è corretta complimenti" << endl;
                risposta += 1;
            };
            break;
        case 5:
            contatore = 1;
            while (getline(file, linea))
            {
                if (contatore == 6)
                {
                    cout << linea << endl;
                    cout << " " << endl;
                    break;
                }
                contatore++;
            }
            contatore2 = 1;
            while (getline(file2, linea))
            {
                for (int i = 21; i < 25; i++)
                {
                    if (contatore2 == i)
                    {
                        cout << linea << endl;
                        break;
                    }
                }
                contatore2++;
            }
            cout << " " << endl;
            cin >> ref;
            if (ref == "b")
            {
				cout << "la risposta è corretta complimenti" << endl;
                risposta += 1;
            };
            break;
        case 6:
            contatore = 1;
            while (getline(file, linea))
            {
                if (contatore == 7)
                {
                    cout << linea << endl;
                    cout << " " << endl;
                    break;
                }
                contatore++;
            }
            contatore2 = 1;
            while (getline(file2, linea))
            {
                for (int i = 25; i < 29; i++)
                {
                    if (contatore2 == i)
                    {
                        cout << linea << endl;
                        break;
                    }
                }
                contatore2++;
            }
            cout << " " << endl;
            cin >> ref;
            if (ref == "c")
            {
				cout << "la risposta è corretta complimenti" << endl;
                risposta += 1;
            };
            break;
        case 7:
            contatore = 1;
            while (getline(file, linea))
            {
                if (contatore == 8)
                {
                    cout << linea << endl;
                    cout << " " << endl;
                    break;
                }
                contatore++;
            }
            contatore2 = 1;
            while (getline(file2, linea))
            {
                for (int i = 29; i < 33; i++)
                {
                    if (contatore2 == i)
                    {
                        cout << linea << endl;
                        break;
                    }
                }
                contatore2++;
            }
            cout << " " << endl;
            cin >> ref;
            if (ref == "d")
            {
				cout << "la risposta è corretta complimenti" << endl;
                risposta += 1;
            };
            break;
        case 8:
            contatore = 1;
            while (getline(file, linea))
            {
                if (contatore == 9)
                {
                    cout << linea << endl;
                    break;
                }
                contatore++;
            }
            contatore2 = 1;
            while (getline(file2, linea))
            {
                for (int i = 33; i < 37; i++)
                {
                    if (contatore2 == i)
                    {
                        cout << linea << endl;
                        break;
                    }
                }
                contatore2++;
            }
            cout << " " << endl;
            cin >> ref;
            if (ref == "a")
            {
				cout << "la risposta è corretta complimenti" << endl;
                risposta += 1;
            };
            break;
        case 9:
            contatore = 1;
            while (getline(file, linea))
            {
                if (contatore == 10)
                {
                    cout << linea << endl;
                    cout << " " << endl;
                    break;
                }
                contatore++;
            }
            contatore2 = 1;
            while (getline(file2, linea))
            {
                for (int i = 37; i < 41; i++)
                {
                    if (contatore2 == i)
                    {
                        cout << linea << endl;
                        break;
                    }
                }
                contatore2++;
            }
            cout << " " << endl;
            cin >> ref;
            if (ref == "a")
            {
				cout << "la risposta è corretta complimenti" << endl;
                risposta += 1;
            };
            break;
        }
    }

    file3 << endl << "il voto è " << risposta;
    file3.close();
    file2.close();
    file.close();

    fineTest();
    return 0;
}

int test()
{
    initmy_Random();
     my_random();

    return 0;
};

int iniziotest()
{
    ofstream file("resoconto.txt");
    string risposta1, scelta, nome, cognome, classe;

    cout << "Prego inserisca il suo nome: ";
    cin >> nome;
    file << "nome del candidato: " << nome << endl;
    ;
    cout << "Adesso inserisca il suo cognome: ";
    cin >> cognome;
    file << "cognome del candidato: " << cognome << endl;
    cout << "Infine aggiunga la sua classe: ";
    cin >> classe;
    file << "classe del candidato: " << classe << endl;
    cout << "perfetto possiamo iniziare: " << endl;
    cout << " " << endl;
    file.close();
    test();

    return 0;
};

int main()
{
    cout << "\033[31mBenvenuto nel test più difficile al mondo!!\033[37m" << endl;

    string scelta;
    int lo = 0;
    while (lo < 1)
    {
        cout << "Ecco le operazioni che può svolgere al momento:" << endl;
        cout << "- Test" << endl;
        cout << "- Exit" << endl;
        cout << "Allora cosa vuole fare: ";
        cin >> scelta;

        if (scelta == "test" or scelta == "Test")
        {
            lo = 1;
            iniziotest();
        }
        else if (scelta == "exit" or scelta == "Exit")
        {
            lo = 1;
            exit(0);
        }
        else if (scelta != "exit" or scelta != "Exit" or scelta != "test" or scelta != "Test")
        {
            cout << "non hai scelto un opzione valida riprova: " << endl;
            lo = 0;
        };
    };
    return 0;
};
