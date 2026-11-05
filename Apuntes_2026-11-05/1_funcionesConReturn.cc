// Apunte 1
// Leonardo Torres Harlow
// Funciones con return / parametros

#include <iostream>
using namespace std;

int potencia2(int num) {
    return num * num;
}

bool esPar(int num) {
    if (num%2 == 0) {
        return true;
    } else {
        return false;
    }
}

string calcularEdad(int year) {
    int edad = 2026 - year;
    return "Tu edad es " + to_string(edad) + " años";
}

int main() {
    // Funcion potencia2
    int x;
    x = potencia2(9);

    cout << "Potencia 2 de 9: " << x << endl;
    cout << "Potencia 2 de 15: " << potencia2(15) << endl;

    int numero;
    cout << "Ingresa un valor: "; cin >> numero;
    cout << "Potencia 2 de " << numero << ": " << potencia2(numero) << endl;

    // Funcion esPar
    cout << numero << "9 par: " << esPar(9) << endl;
    cout << numero << "62 par: " << esPar(62) << endl;

    cout << boolalpha << "71 es par: " << esPar(71) << endl;
    cout << boolalpha << "28 es par: " << esPar(28) << endl;

    cout << "Ingresa un valor: "; cin >> numero;
    cout << numero << " es par: " << esPar(numero) << endl;

    // Funcion calcularEdad
    int yearBirth;
    cout << "Ingresa tu año de nacimiento: "; cin >> yearBirth;
    cout << calcularEdad(yearBirth) << endl;
    return 0;
}
