// Apunte 3
// Leonardo Torres Harlow
// Pedir al usuario 5 numeros enteros, guardarlos en un arreglo y mostrarlos en orden inverso al que fueron ingresados
#include <iostream>

using namespace std;

int main() {
    int num[5];
    cout << "Ingresa 5 números enteros:" << endl;

    for (int i=0; i<5; i++) {
        cin >> num[i];
    }

    cout << "Orden inverso (FORMA 1):" << endl;
    for (int i=4; i>=0; i--) {
        cout << num[i] << endl;
    }
    return 0;
}
