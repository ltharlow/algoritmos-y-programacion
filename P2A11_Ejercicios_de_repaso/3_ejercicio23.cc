/*
23. Realizar un programa para calcular la velocidad (en m/s) de los corredores de la carrera de 1.500
metros. La entrada consistirá en los minutos y segundos, que dan el tiempo del corredor; por
cada corredor, el programa debe visualizar el tiempo en minutos y segundos, así como la
velocidad.
*/

#include <iostream>
using namespace std;

int main() {
    float d = 1500.0;     // Distancia
    int cdr = 1;          // Número de corredor
    int min = -1, s = -1; // Minutos, segundos
    float t;              // Tiempo total en segundos
    float v;              // Velocidad

    cout << "(ingersa 0, 0 para finalizar)" << endl;

    while ((min != 0) and (s != 0)) {
        cout << "---------- Corredor " << cdr << "----------" << endl;
        cout << "Min: "; cin >> min;
        while (min < 0) {
            cout << "ERROR: EL VALOR DEBE SER MAYOR O IGUAL A 0" << endl;
            cout << "Minutos: "; cin >> min;
        }
        cout << "Seg: "; cin >> s;
        while ((s < 0) or (s >= 60)) {
            cout << "ERROR: EL VALOR DEBE SER MAYOR O IGUAL A 0 Y MENOR QUE 60" << endl;
            cout << "Segundos: "; cin >> s;
        }
        if ((min != 0) or (s != 0)) {
            t = s + (min * 60);
            v = d / t;

            cout << "Segundos totales: " << t << "" << endl;
            cout << "Velocidad (m/s): " << v << endl;

            cdr++;
        }
    }

    cout << endl;
    cout << "Programa finalizado.";
    return 0;
}
