#include <iostream>
#include <string>

using namespace std;

class Studente {
private:
    string nome;
    int assenze;

public:
    // Costruttore
    Studente(string nomeStudente) {
        nome = nomeStudente;
        assenze = 0;
    }

    // Aggiunge assenze
    void aggiungiAssenze(int n) {
        assenze = assenze + n;
    }

    // Rimuove assenze (non scende sotto zero)
    void rimuoviAssenze(int n) {
        assenze = assenze - n;
        if (assenze < 0) {
            assenze = 0;
        }
    }

    // Restituisce il numero di assenze
    int leggiAssenze() {
        return assenze;
    }

    // Restituisce il nome dello studente
    string getNome() {
        return nome;
    }
};

class Docente {
private:
    string nome;

public:
    // Costruttore
    Docente(string nomeDocente) {
        nome = nomeDocente;
    }

    // Metodo per aggiungere assenze
    void aumentaAssenze(Studente &studente, int n) {
        studente.aggiungiAssenze(n);
    }

    // Metodo per rimuovere assenze 
    void diminuisciAssenze(Studente &studente, int n) {
        studente.rimuoviAssenze(n);
    }

    // Metodo per leggere assenze e stamparle
    void leggiAssenzeStudente(Studente &studente) {
        cout << "Docente " << nome << " legge: ";
        cout << "Lo studente " << studente.getNome() << " ha ";
        cout << studente.leggiAssenze() << " assenze" << endl;
    }

    // Restituisce il nome del docente
    string getNome() {
        return nome;
    }
};

int main() {
    string nomeStudente;
    cout << "Inserisci il nome dello studente:";
    cin >> nomeStudente;

    Studente studente(nomeStudente);

    Docente docenti[3] = { Docente("Rossi"), Docente("mario"), Docente("claudio") };

    while (true) {
        cout << "Lista docenti:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << ") " << docenti[i].getNome() << endl;
        }
        cout << "4) Esci" << endl;
        cout << "Scegli un docente (1-3) o 4 per uscire: ";
        int sceltaDocente;
        cin >> sceltaDocente;

        if (sceltaDocente == 4) {
            cout << "addio" << endl;
            break;
        }

        if (sceltaDocente < 1 || sceltaDocente > 3) {
            cout << "opzione non valida" << endl;
            continue;
        }

        Docente &docenteSelezionato = docenti[sceltaDocente - 1];

        cout << "Operazioni possibili:" << endl;
        cout << "1) Aggiungi assenze" << endl;
        cout << "2) Rimuovi assenze" << endl;
        cout << "3) Leggi assenze" << endl;
        cout << "Scegli operazione 1-3: ";
        int sceltaOperazione;
        cin >> sceltaOperazione;

        if (sceltaOperazione == 1) {
            cout << "Quante assenze aggiungere??";
            int n;
            cin >> n;
            docenteSelezionato.aumentaAssenze(studente, n);
            cout << "Assenze aggiornate" << endl;
        }
        else if (sceltaOperazione == 2) {
            cout << "Quante assenze rimuovere?? ";
            int n;
            cin >> n;
            docenteSelezionato.diminuisciAssenze(studente, n);
            cout << "Assenze aggiornate" << endl;
        }
        else if (sceltaOperazione == 3) {
            docenteSelezionato.leggiAssenzeStudente(studente);
        }
        else {
            cout << "opzione non valida" << endl;
        }
    }

    return 0;
}
