#include <iostream>
#include <string>

using namespace std;

class ContoBancario {
private:
    double saldo;
    string intestatario;

public:
    ContoBancario(double s, string i) {
        saldo = s;
        intestatario = i;
    }

    void deposita() {
        double numero;
        cout << "Quanto vuoi depositare? ";
        cin >> numero;
        saldo += numero;
        cout << "Hai depositato " << numero << "€" << endl;
    }

    void preleva() {
        double numero;
        cout << "Quanto vuoi prelevare? ";
        cin >> numero;
        saldo -= numero;
        cout << "Hai prelevato " << numero << "€" << endl;
    }

    void visualizzaSaldo() {
        cout << "Il saldo di " << intestatario << " è di " << saldo << "€" << endl;
    }
};

int main() {
    string intestatario;
    double saldo;

    cout << "Nome intestatario: ";
    cin >> intestatario;
    cout << "Saldo iniziale: ";
    cin >> saldo;

    ContoBancario conto1(saldo, intestatario);

    string risposta;
    while (true) {
        cout << "Cosa vuoi fare?? (prelevare, depositare, saldo, esci): ";
        cin >> risposta;

        if (risposta == "prelevare") {
            conto1.preleva();
        } else if (risposta == "depositare") {
            conto1.deposita();
        } else if (risposta == "saldo") {
            conto1.visualizzaSaldo();
        } else if (risposta == "esci") {
            break;
        } else {
            cout << "Opzione non corretta." << endl;
        }
    }

    return 0;
}
