#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador_pares = 0;

    cout << "Digite um numero: ";
    cin >> numero;

    cout << "\nNumeros pares de 1 ate " << numero << ":\n";

    for (int i = 1; i <= numero; i++) {
        if (i % 2 == 0) { // verifica se é par
            cout << i << endl;
            contador_pares++;
        }
    }

    cout << "\nQuantidade de numeros pares: " << contador_pares << endl;

    return 0;
}