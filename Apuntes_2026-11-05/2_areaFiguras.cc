// Apunte 2
// Leonardo Torres Harlow
// Figuras geometricas

#include <iostream>
using namespace std;

float circulo(float radio){
    return  3.141597 * radio * radio;
}

float cuadrado(float lado){
    return lado * lado;
}

float rectangulo(float base, float altura){
    return base * altura;
}

float triangulo(float base, float altura){
    return base * altura / 2;
}

float trapecio(float bMayor, float bMenor, float altura){
    return (bMayor + bMenor) * altura / 2;
}

void menu(){
    cout << "----- MENÚ -----" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Rectangulo" << endl;
    cout << "4. Triangulo" << endl;
    cout << "5. Trapecio" << endl;
    cout << "Selecciona una opción: ";

}

int main(){
    int opcion;
    menu();
    cin >> opcion;
    cout << endl;

    switch(opcion){
        case 1:
            cout << "----- CIRCULO -----" << endl;
            cout << "Radio: 3.5 | Area: " << circulo(3.5) << endl;
            break;
        case 2:
            cout << "----- CUADRADO -----" << endl;
            cout << "Lado: 9.7 | Area: " << cuadrado(9.7) << endl;
            break;
        case 3:
            cout << "----- RECTANGULO -----" << endl;
            cout << "Base: 4.9, Altura: 5.1 | Area: " << rectangulo(4.9, 5.1) << endl;
            break;
        case 4:
            cout << "----- TRIANGULO -----" << endl;
            cout << "Base: 5.2, Altura: 1.3 | Area: " << triangulo(5.2, 1.3) << endl;
            break;
        case 5:
            cout << "----- TRAPECIO -----" << endl;
            cout << "Base mayor: 6, Base menor: 3, Altura: 4 | Area: " << trapecio(6, 3, 4) << endl;
            break;
        default:
            cout << "ERROR: OPCIÓN NO VALIDA" << endl << endl;
            menu();
            cin >> opcion;
    }

    return 0;
}
