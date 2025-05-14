#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int operazione;
    float num1, num2, result;
    float numsu;

    cout << "scegli l'operazione: \n"
        << "Addizione = 0\n"
        << "Sottrazione = 1\n"
        << "Moltiplicazione = 2\n"
        << "Divisione = 3\n"
        << "Potenza = 4\n"
        << "Radice = 5\n"
        << "Seno = 6\n"
        << "Coseno = 7\n"
        << "Tangente = 8\n";
    cin >> operazione;

    if (operazione >= 4)
    {
        cout << "Dammi il valore: ";
        cin >> numsu;
    }
    else
    {
        cout << "Dammi il primo numero: ";
        cin >> num1;
        cout << "Dammi il secondo numero: ";
        cin >> num2;
    }

    switch (operazione)
    {
    case 0:
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result;
        break;
    case 1:
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result;
        break;
    case 2:
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result;
        break;
    case 3:
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result;
        }
        else
        {
            cout << "Errore: divisione per zero!";
        }
        break;
    case 4:
        result = pow(numsu, 2);
        cout << numsu << " ^ 2 = " << result;
        break;
    case 5:
        if (numsu >= 0)
        {
            result = sqrt(numsu);
            cout << "Radice quadrata di " << numsu << " = " << result;
        }
        else
        {
            cout << "Errore: radice di numero negativo!";
        }
        break;
    case 6:
        result = sin(numsu);
        cout << "Seno di " << numsu << " = " << result;
        break;
    case 7:
        result = cos(numsu);
        cout << "Coseno di " << numsu << " = " << result;
        break;
    case 8:
        result = tan(numsu);
        cout << "Tangente di " << numsu << " = " << result;
        break;
    default:
        cout << "Errore: operazione non valida";
        break;
    }

    return 0;
}
