// Apunte 2
// Leonardo Torres Harlow
// Arreglos con ciclos
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Arreglo con valores iniciales
    int c[] = {12, 3, 27, 16, 4, 51, 8, 40};

    cout << "Elementos:" << endl;
    for (int i=0; i<8; i++) {
        cout << c[i] << endl;
    }

    // Arreglo sin valores iniciales
    string materias[5];

    for (int i=0; i<5; i++) {
        cout << "Ingresa la materia " << i + 1 << ": ";
        cin >> materias[i];
    }

    for (int i=0; i<5; i++) {
        cout << materias[i] << ", ";
    }
    return 0;
}
