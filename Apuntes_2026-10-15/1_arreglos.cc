// Apunte 1
// Leonardo Torres Harlow
// Arreglos
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Arreglo con valores iniciales
    int c[] = {12, 3, 27, 16, 4, 51, 8, 40};

    cout << "Elementos:" << endl;
    cout << c[0] << endl;
    cout << c[1] << endl;
    cout << c[2] << endl;
    cout << c[3] << endl;
    cout << c[4] << endl;
    cout << c[5] << endl;
    cout << c[6] << endl;
    cout << c[7] << endl;

    cout << "-----------------------------------" << endl;

    // Arreglo sin valores iniciales
    string materias[5];

    cout << "Ingresa 5 materias:" << endl;
    cin >> materias[0];
    cin >> materias[1];
    cin >> materias[2];
    cin >> materias[3];
    cin >> materias[4];

    int i;
    cout << "Ingresa el número de materia que quieres mostrar (1-5): ";
    cin >> i;

    while ((i < 1) or (i > 5)) {
        cout << "ERROR: EL NÚMERO TIENE QUE SER 1-5" << endl;
        cout << "Ingresa el número de materia que quieres mostrar (1-5): ";
        cin >> i;
    }

    cout << materias[i-1];
    return 0;
}
