// Leonardo Torres Harlow
// Área y perimetro de un circulo

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    double radio, area, perimetro;
    cout << "Ingresa el radio del circulo: "; cin >> radio;

    double pi = 3.1415;

    // Area sin funciones matematicas
    area = pi * radio * radio;
    perimetro = 2 * pi * radio;
    cout << "Área (sin funciones): " << area << endl <<
        "Perimetro (sin funciones con formato): " << fixed << setprecision(1) << perimetro << endl;

    // Area con funciones matematicas
    area = M_PI * pow(radio, 2);
    perimetro = 2 * M_PI * radio;
    cout << "Área (con funciones con formato): " << fixed << setprecision(1) << area << endl <<
        "Perimetro (con funciones): " << fixed << setprecision(2) << perimetro << endl;

    return 0;
}
