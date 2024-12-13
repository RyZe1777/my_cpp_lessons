#include <iostream>

using namespace std;

void equacaoA() {
    float x1, x2, y1, y2;

    // Solicita os valores ao usuário
    cout << "Digite quatro valores (x1, x2, y1, y2) separados por espacos: ";
    cin >> x1 >> x2 >> y1 >> y2;

    // Exibe os cálculos das médias
    cout << "Para equacao (x1+x2)/2 o resultado e: " << (x1 + x2) / 2 << endl;
    cout << "Para equacao (y1+y2)/2 o resultado e: " << (y1 + y2) / 2 << endl;

    // Exibe o vetor resultante
    cout << "O vetor de saida e: (" << (x1 + x2) / 2 << ", " << (y1 + y2) / 2 << ")" << endl;
}

int main() {
    equacaoA();
    return 0;
}