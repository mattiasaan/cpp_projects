#include <iostream>
#include <cmath>
using namespace std;

void RisolviPrimoGrado(float b, float c)
{
    if (b == 0)
    {
        if (c == 0)
        {
            cout << "Equazione indeterminata" << endl;
        }
        else
        {
            cout << "Equazione impossibile" << endl;
        }
    }
    else
    {
        cout << "x = " << -c / b << endl;
    }
}

float CalcolaDelta(float a, float b, float c)
{
    return b * b - 4 * a * c;
}

void RisolviSecondoGrado(float a, float b, float c)
{
    float delta = CalcolaDelta(a, b, c);
    if (delta < 0)
    {
        cout << "Non esistono soluzioni reali" << endl;
    }
    else
    {
        float x1 = (-b - sqrt(delta)) / (2 * a);
        float x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
}

int main()
{
    float a, b, c;
    cout << "Tre coefficienti: " << endl;
    cin >> a >> b >> c;

    if (a != 0)
        RisolviSecondoGrado(a, b, c);
    else
        RisolviPrimoGrado(b, c);

    return 0;
}
