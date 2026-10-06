// Apunte 3
// Leonardo Torres Harlow
// Subtotal de un producto mas el IVA

#include <iostream>
using namespace std;

int main() {
    float precio, iva, subtotal, total;
    int cantidad;

    cout << "Precio del producto: $"; cin >> precio;
    cout << "Cantidad del producto: "; cin >> cantidad;

    subtotal = precio * cantidad;
    iva = subtotal * 0.16;
    total = subtotal + iva;

    cout << "Subtotal: $" << subtotal << endl;
    cout << "IVA: $" << iva << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
