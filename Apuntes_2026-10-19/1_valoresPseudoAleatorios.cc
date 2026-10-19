// Apunte 1
// Leonardo Torres Harlow
// Valores pseudo-aleatorios

#include <iostream>
#include <cstdlib> // Funciones rand()
#include <ctime> // Tiempo del sistema
using namespace std;

int main () {
    srand(time(NULL));

    int num;

    num = rand();
    cout << "Valor pseudo-aleatorio: " << num << endl;

    num = rand() % 11;
    cout << "Valor entre 0-10: " << num << endl;

    num = rand() % 11 + 5;
    cout << "Valor entre 5-15: " << num << endl;

    num = rand() % 51 + 50;
    cout << "Valor entre 100-150: " << num << endl;

    return 0;
}
