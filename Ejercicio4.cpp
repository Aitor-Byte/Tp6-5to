#include <iostream>
#include <string>

using namespace std;

class Empleado {
private:
    string nombre;
    double sueldo;

public:
    void cargar() {
        cout << "Ingrese el nombre del empleado: ";
        getline(cin, nombre);
        cout << "Ingrese el sueldo: ";
        cin >> sueldo;
        cin.ignore();
    }

    void imprimir() {
        cout << "Nombre: " << nombre << endl;
        cout << "Sueldo: " << sueldo << endl;
    }

    void pagarImpuestos() {
        if (sueldo > 3000) {
            cout << "Debe pagar impuestos." << endl;
        } else {
            cout << "No debe pagar impuestos." << endl;
        }
    }
};

int main() {
    Empleado empleado1;
    empleado1.cargar();
    empleado1.imprimir();
    empleado1.pagarImpuestos();
    return 0;
}
