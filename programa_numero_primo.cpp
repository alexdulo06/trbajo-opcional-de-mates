#include <iostream>
#include <string>
using namespace std;

// Función para verificar si un número es divisible por 7
bool esDivisiblePor7(string numero) {
    int residuo = 0;
    for (char digito : numero) {
        residuo = (residuo * 10 + (digito - '0')) % 7;
    }
    return residuo == 0;
}

// Explicación del criterio de divisibilidad por 7
void criterioDeDivisibilidad() {
    cout << "Criterio de divisibilidad por 7:\n";
    cout << "Un número es divisible por 7 si el doble de la última cifra, restado del número sin ella, es múltiplo de 7." << endl;
}

int main() {
    criterioDeDivisibilidad();

    string numero;
    cout << "Introduce el número a verificar: ";
    cin >> numero;

    if (esDivisiblePor7(numero)) {
        cout << "El número " << numero << " es divisible por 7." << endl;
    } else {
        cout << "El número " << numero << " NO es divisible por 7." << endl;
    }

    return 0;
}