#include <iostream>
using namespace std;

void menu() {
    cout << "----- MENÚ -----" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. División" << endl;
    cout << "Elije una opción: ";
}

void suma() {
    int a,b;
    cout << "Valor A: "; cin >> a;
    cout << "Valor B: "; cin >> b;
    cout << "La suma es: " << a + b;
}

void resta() {
    int a,b;
    cout << "Valor A: "; cin >> a;
    cout << "Valor B: "; cin >> b;
    cout << "La resta es: " << a - b;
}

void mult() {
    int a,b;
    cout << "Valor A: "; cin >> a;
    cout << "Valor B: "; cin >> b;
    cout << "La multiplicación es: " << a * b;
}

void div() {
    int a,b;
    cout << "Valor A: "; cin >> a;
    cout << "Valor B: "; cin >> b;
    while (b == 0) {
        cout << "ERROR: EL DENOMINADOR NO DEBE SER 0" << endl;
        cout << "Valor B: "; cin >> b;
    }
    cout << "La división es: " << a / b;
}

int main() {
    int mn;
    menu();
    cin >> mn;
    while ((mn < 1) or (mn > 4)) {
        cout << "ERROR: OPCIÓN NO VALIDA" << endl;
        menu();
        cin >> mn;
    }

    cout << endl;

    switch(mn){
        case 1: suma(); break;
        case 2: resta(); break;
        case 3: mult(); break;
        case 4: div(); break;

    }
}
