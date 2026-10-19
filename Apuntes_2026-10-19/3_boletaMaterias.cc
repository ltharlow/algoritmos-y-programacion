// Leonardo Torres Harlow

#include <iostream>
#include <cstdlib> // Funciones rand()
#include <ctime> // Tiempo del sistema
#include <string> // Imprimir varios * segun la calificación
#include <iomanip> // Deja espacios en blanco
using namespace std;

int main () {
    srand(time(NULL));

    int m;

    cout << "Ingresa el número de materias: ";
    cin >> m;

    string mat[m];
    int cal[m], suma = 0;

    for (int i=0; i<m; i++) { // Asignar nombre y calificación (5-10)
        cout << "Nombre de la materia " << i+1 << ": ";
        cin >> mat[i];
        cal[i] = rand() % 6 + 5;
        suma += cal[i];
    }

    cout << "----------------------------------" << endl;

    for (int i=0; i<m; i++) { // Imprimir nombre y calificación
        cout << left << setw(15) << mat[i] << " | " << right << setw(2) << cal[i] << " | " << string(cal[i], '*') << endl;
    }

    cout << left << setw(15) << "Promedio" << " | " << right << setw(2) << suma/m << " | " << string(suma/m, '*') << endl;


    return 0;
}
