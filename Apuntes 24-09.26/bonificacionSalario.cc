// Leonardo Torres Harlow
#include <iostream>
using namespace std;

int main() {
    float salBas, porBon, valBon;
    int tieSer;
    
    cout << "Salario básico: ";
    cin >> salBas;
    cout << "Años de servicio: ";
    cin >> tieSer
    
    if (tieSer < 5) {
        porBon = 5;
    } else if (tieSer < 10 {
        porBon = 10;
    } else if (tieSer < 20) {
        porBon = 20;
    } else if (tieSer < 25) {
        porBon = 25;
    } else if (tieSer < 30) {
        porBon = 35;
    } else {
        porBon = 50;
    }
    
    valBon = salBas * porBon / 100;
    
    cout << "Porcentaje de bonificación: " << porBon << "%" << endl
         << "Salario + bonificación: $" << salBas + valBon
    
    return 0;
}
