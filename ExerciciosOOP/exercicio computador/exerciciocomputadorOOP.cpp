#include <iostream>
#include <string>

using namespace std;

struct AtributosPC {
    string RAM;
    string PlacaGrafica;
    string CPU;
    string PSU;
    string Caixa;
    string MotherBoard;
    string DiscoRigido;
    string DispositivosExternos;
    string Ventoinhas;
    char Perifericos[5];
};

class Computador {
public:
    void Ligar() {
        cout << "O PC está a ser ligado." << endl;
    }

    void Desligar() {
        cout << "O PC está a ser desligado." << endl;
    }

    void Reset() {
        cout << "O PC está a ser reiniciado." << endl;
    }

    void Abrir_Tampa() {
        cout << "A tampa do PC está aberta." << endl;
    }

    void Executar() {
        Formatar();
        Abrir_Pastas();
        Init_So();
        Init_GPU();
        Remover_Ficheiro();
    }

    void Input() {
        cout << "Input recebido no PC." << endl;
    }

private:
    void Formatar() {
        cout << "O PC está a ser formatado." << endl;
    }

    void Abrir_Pastas() {
        cout << "Abrindo pastas..." << endl;
    }

    const void Init_So() {
        cout << "Iniciando o sistema operativo." << endl;
    }

    const void Init_GPU() {
        cout << "Iniciando a placa gráfica." << endl;
    }

    void Remover_Ficheiro() {
        cout << "Removendo ficheiro..." << endl;
    }
};

void menu(Computador& pc) {
    int opcao;
    do {
        cout << "\nEscolha a opção:\n \n1 - Ligar \n2 - Desligar \n3 - Reset \n4 - Abrir Tampa \n5 - Executar \n6 - Input \n7 - Sair" << endl;
        cin >> opcao;

        switch(opcao) {
            case 1:
                pc.Ligar();
                break;

            case 2:
                pc.Desligar();
                break;

            case 3:
                pc.Reset();
                break;

            case 4:
                pc.Abrir_Tampa();
                break;

            case 5:
                pc.Executar();
                break;

            case 6:
                pc.Input();
                break;

            case 7:
                cout << "Saindo..." << endl;
                break;

            default:
                cout << "Opção inválida, tente novamente." << endl;
                break;
        }
    } while (opcao != 7);
}

int main() {
    Computador pc;
    menu(pc);
    return 0;
}