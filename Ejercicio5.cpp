#include <iostream>

using namespace std;

class Operaciones {
private:
    int valor1;
    int valor2;

public:
    void cargar() {
        cout << "Ingrese el primer valor: ";
        cin >> valor1;
        cout << "Ingrese el segundo valor: ";
        cin >> valor2;
    }

    void sumar() {
        int suma = valor1 + valor2;
        cout << "Suma: " << suma << endl;
    }

    void restar() {
        int resta = valor1 - valor2;
        cout << "Resta: " << resta << endl;
    }

    void multiplicar() {
        int multiplicacion = valor1 * valor2;
        cout << "Multiplicacion: " << multiplicacion << endl;
    }

    void dividir() {
        if (valor2 != 0) {
            double division = static_cast<double>(valor1) / valor2;
            cout << "Division: " << division << endl;
        } else {
            cout << "Division: No se puede dividir por cero." << endl;
        }
    }
};

int main() {
    Operaciones operacion1;
    operacion1.cargar();
    operacion1.sumar();
    operacion1.restar();
    operacion1.multiplicar();
    operacion1.dividir();
    return 0;
}
