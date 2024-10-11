#include <iostream>
#include <string>

using namespace std;

struct hardware {
    string RAM;
    string GPU;
    string CPU;
    string PSU;
    string Caixa;
    string MotherBoard;
    string HDD;
    string DispositivosExternos;
    string FANs;
    char Perifericos[5];
};

class Computer {
    private:
        hardware computer; // variavel computador do tipo hardware (struct)
        bool state; // computador ligado ou nao

        void Formatar() {
            cout << "O computador vai ser formatado" << endl;
        };

        void AbrirPasta() {
            cout << "A pasta do computador foi aberta" << endl;
        };

        void IniciarSO() {
            cout << "O sistema operativo esta a ser iniciado" << endl;
        };

        void IniciarGPU() {
            cout << "A placa grafica esta a ser iniciada" << endl;
        };

        void RemoverFicheiro() {
            cout << "O ficheiro vai ser removido" << endl;
        }

        void ListaHardware() {
            cout << endl;
            cout << "Hardware do computador: " << endl;
            cout << "RAM: " << computer.RAM << endl;
            cout << "GPU: " << computer.GPU << endl;
            cout << "CPU: " << computer.CPU << endl;
            cout << "PSU: " << computer.PSU << endl;
            cout << "Caixa: " << computer.Caixa << endl;
            cout << "MotherBoard: " << computer.MotherBoard << endl;
            cout << "Disco: " << computer.HDD << endl;
            cout << "FANs: " << computer.FANs << endl;
            cout << "Perifericos: ";

            for (int x = 0; x < 5; x++) {
                cout << "\t";
                cout << computer.Perifericos[x]; // variavel computador 
            }
            cout << endl;
            cout << endl;
        }

    public:
        Computer(hardware hardware) { // 1 hardware - tipo de dado (struct) / 2 hardware - nome
            this->computer = hardware; // vai guardar os dados do computer no hardware do parametro
            this->state = false;
            cout << "O computador foi instanciado com sucesso" << endl;
            ListaHardware();
        }

        void Ligar() {
            if (state) {
                cout << "O computador ja esta ligado" << endl;
            } else {
                cout << "O computador vai ligar" << endl;
                this->state = true;
            }
        };

        void Desligar() {
            if (state) {
                cout << "O computador vai ser desligado" << endl;
                this->state = false;
            } else {
                cout << "O computador ja esta desligado" << endl;
            }
        };

        void Reiniciar() {
            if (state) {
                cout << "O computador vai ser reiniciado" << endl;
            } else {
                cout << "O computador esta desligado e nao pode ser reiniciado" << endl;
            }
        };

        void AbrirTampa() {
            cout << "A tampa foi aberta" << endl;
        };

        void Executar(int opcao) {
            switch (opcao) {
                case 1:
                    if (state) {
                        Formatar();
                    } else {
                        cout << "O computador nao esta ligado" << endl;
                    }
                    break;

                case 2:
                    if (state) {
                        AbrirPasta();
                    } else {
                        cout << "O computador nao esta ligado" << endl;
                    }
                    break;

                case 3:
                    if (state) {
                        RemoverFicheiro();
                    } else {
                        cout << "O computador nao esta ligado" << endl;
                    }
                    break;

                default:
                    cout << "Opcao Invalida" << endl;
                    break;
            }
        }

        void input() {
            if (state) {
                cout << "Recebendo input" << endl;
            } else {
                cout << "O computador nao esta ligado" << endl;
            }
        }
};

int main() {
    hardware hardware1 = {"16GB", "RTX 3080", "Intel i9", "750W", "Cooler Master", "Asus ROG", "1TB SSD", "Teclado, Rato", "3 Fans", {'M', 'T', 'R', 'T', 'S'}};
    Computer Computer(hardware1); 

    Computer.Ligar();
    Computer.Executar(1); // Exemplo de execução do método Formatar
    Computer.Desligar();

    return 0;
}