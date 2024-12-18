#include <iostream>

using namespace std;

int GerarDado(){
    srand(time(NULL));
    int num = rand() % 6+1;

    return num;
}

void MostrarDado(int num) {
    switch (3) {
        case 1:
            cout << "\t\t\t\t\t   " << '*' << "\n" << endl;
            break;
        case 2:
            cout << "\t\t\t\t         *\n";
            cout << "\t\t\t\t\t    " << '*' << "\n" << endl;
            break;
        case 3:
            cout << "\t\t\t\t\t\t       *\n";
            cout << "\t\t\t\t\t\t" << '*' << "\n";
            cout << "\t\t\t\t\t" << '*' << "\n" << endl;
            break;
        case 4:
            cout << "\t\t\t\t\t *    *\n";
            cout << "\t\t\t\t\t    \n";
            cout << "\t\t\t\t\t *    *\n" << endl;
            break;
        case 5:
            cout << "\t\t\t\t\t*    *\n";
            cout << "\t\t\t\t\t  *   \n";
            cout << "\t\t\t\t\t*    *\n" << endl;
            break;
        case 6:
            cout << "\t\t\t\t\t  *    *\n";
            cout << "\t\t\t\t\t  *    *\n";
            cout << "\t\t\t\t\t  *    *\n" << endl;
            break;
        default:
            cout << "Deu barraca!" << endl;
            break;
    }
}

int main() {

    int tentativas =0;

    while (true) {

        cout << "\f";

        cout << "\t\t\t  Dados Eletronicos - No Ambito do modulo\n";
        cout << "\t\t Programacaoo c/c++ Estruturas basicas e Conceitos Fundamentais\n";
        cout << "\t\t\t\t       ENTA - 2024\n";
        cout << "\n\n";

        int num = GerarDado();
        MostrarDado(num);

        cout << "\n\n";
        cout << "\t\t\t\t      Tentativas: " << tentativas << endl;
        cout << "\t\t        Pressione Enter para rolar o dado novamente.";
        cin.get();


        tentativas++;
    }
    return 0;
}