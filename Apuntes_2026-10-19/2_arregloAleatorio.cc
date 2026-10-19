// Apunte 2
// Leonardo Torres Harlow
// Arreglo con valores aleatorios entre 50 y 100

#include <iostream>
#include <cstdlib> // Funciones rand()
#include <ctime> // Tiempo del sistema
using namespace std;

int main () {
    srand(time(NULL));

    int promedio, suma = 0;
    int Aleatorios[5];

    for(int i=0; i<5; i++){
        Aleatorios[i] = rand() % 51 + 50; // Valor entre 100 y 150
        suma += Aleatorios[i];
        cout << Aleatorios[i];
        if (i<4) {
            cout << ", ";
        } else {
            cout << endl;
        }
    }

    promedio = suma/5;
    cout << "Promedio de los valores: " << promedio << endl;

    return 0;
}
