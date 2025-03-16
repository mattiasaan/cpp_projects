#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int binarioADecimale(string numero) {
    int conver = 0;
    int i = 0;
    
    for (int j = numero.length() - 1; j >= 0; j--) {
        if (numero[j] != '0' && numero[j] != '1') {
            cout << "Il numero inserito non e binario" << endl;
            return 1;
        }
        if (numero[j] == '1') {
            conver += pow(2, i);
        }
        i++;
    }
    cout << conver << endl;
    return 0;
}

int decimaleABinario(int numero) {
    if (numero < 0) {
        cout << "Inserire un numero positivo" << endl;
        return 1;
    }
    string conver = "";
    if (numero == 0) conver = "0";
    while (numero > 0) {
        conver = to_string(numero % 2) + conver;
        numero /= 2;
    }
    cout << conver << endl;
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << "Uso: " << argv[0] << " <b-d/d-b> <numero>" << endl;
        return 1;
    }
    string opzione = argv[1];
    string numero = argv[2];
    
    if (opzione == "b-d") {
        return binarioADecimale(numero);
    } else if (opzione == "d-b") {
        int num = stoi(numero);  //converte char in int
        return decimaleABinario(num);
    } else {
        cout << "Errore: Opzione non valida." << endl;
        return 1;
    }
}
