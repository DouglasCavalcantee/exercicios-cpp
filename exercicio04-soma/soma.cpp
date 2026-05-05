#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;

    cout << "Digite numeros (0 para parar):" << endl;
    cin >> numero;

    while (numero != 0) {
        soma += numero; // soma os valores

        cout << "Soma atual: " << soma << endl;

        cout << "Digite outro numero (0 para parar): ";
        cin >> numero;
    }

    cout << "\nSoma total: " << soma << endl;

    return 0;
}