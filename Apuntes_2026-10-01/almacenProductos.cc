// Leonardo Torres Harlow
// Almacen de pedidos

#include <iostream>
using namespace std;

int main() {
    int numProducto, cantidad;
    double valorTotal;

    cout << "Ingresa el numero del producto: " << endl;
    cin >> numProducto;
    cout << "Ingresa la cantidad vendida: " << endl;
    cin >> cantidad;

    switch (numProducto) {
        case 1:
            valorTotal = cantidad * 2.98;
            break;
        case 2:
            valorTotal = cantidad * 4.50;
            break;
        case 3:
            valorTotal = cantidad * 9.98;
            break;
        case 4:
            valorTotal = cantidad * 4.49;
            break;
        case 5:
            valorTotal = cantidad * 6.87;
            break;
        default:
            cout << "Producto no valido" << endl;
            return 0;
            break;
    }

    cout << "El valor total es: $" << valorTotal << endl;
}
