#include <iostream>
using namespace std;

int main() {
    float numero, soma = 0;
    int contador = 0;

    cout << "Digite numeros (0 para parar):" << endl;

    while (true) {
        cin >> numero;

        if (numero == 0) {
            break; // encerra o loop
        }

        soma += numero;      // soma os números
        contador++;          // conta quantos números foram digitados
    }

    if (contador > 0) {
        float media = soma / contador;
        cout << "Media: " << media << endl;
        cout << "Quantidade de numeros: " << contador << endl;
    } else {
        cout << "Nenhum numero foi digitado." << endl;
    }

    return 0;
}