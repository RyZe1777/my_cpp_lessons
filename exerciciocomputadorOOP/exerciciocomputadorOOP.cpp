#include <iostream>
#include <string>

using namespace std;

struct AtributosPC {
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

class Computer{
    
    private:
        
        AtributosPC computador;
        bool state;
        
        void Formatar(){
            cout << " \n O computador vai ser formatado" <<endl;
        }
        
        void AbrirPasta(){
            cout << " \nA pasta foi aberta" <<endl;
        }
        
        void IniciarSO(){
            cout << " \n O SO vai ser iniciado" <<endl;
        }
        
        void IniciarGPU(){
            cout << " \n A GPU vai ser inciada" <<endl;
        }
        
        void RemoverFicheiro(){
            cout << " \n O ficheiro vai ser Removido" <<endl;
        }
        
        
        void ListaHardware() {
            cout << endl;
            cout << "Hardware do computador: " << endl;
            cout << "RAM: " << computador.RAM << endl;
            cout << "GPU: " << computador.GPU << endl;
            cout << "CPU: " << computador.CPU << endl;
            cout << "PSU: " << computador.PSU << endl;
            cout << "Caixa: " << computador.Caixa << endl;
            cout << "MotherBoard: " << computador.MotherBoard << endl;
            cout << "Disco: " << computador.HDD << endl;
            cout << "FANs: " << computador.FANs << endl;
            cout << "Perifericos: ";
            
            for(int x = 0; x < 5; x++){
                cout << "\t";
                cout << computador.Perifericos[x];
            }
            
            cout << endl;
            cout << endl;
            
        }
        
        public:
        
        Computer(AtributosPC hardware){
            this -> computador = hardware; 
            this -> state = false;
            
            cout << "O computador foi instanciado" <<endl;
            
            ListaHardware();
        }
        
        
        void Ligar() {
            if (state) {
                cout << "O computador ja esta ligado" << endl;
            } else {
                cout << "O computador vai ligar \n" << endl;
                this->state = true;
            }
        }
        
        void Desligar(){
            if(state){
                cout << "O computador vai ser Desligado \n" <<endl;
                this ->state = false;
            }else{
                cout << "O computador ja esta Desligado \n" <<endl;
            }
        }
        
        void Reniciar(){
            if(state){
                cout << "O computador vai ser Reniciado \n" <<endl;
            }else{
                cout << "O computador esta desligado e nao pode ser reniciado \n" <<endl;
            }
        }
        
        void AbrirTampa() {
            cout << "A tampa foi aberta" << endl;
        }
        
        void Executar(int opcao){
            switch(opcao){
                
                case 1:
                    if(state){
                        Formatar();
                    }else{
                        cout << "O computador esta desligado" <<endl;
                    }
                break;
                
                case 2:
                    if(state){
                        AbrirPasta();
                    }else{
                        cout << "O Computador esta Desligado" <<endl;
                    }
                break;
                
                case 3:
                    if(state){
                        IniciarSO();
                    }else{
                        cout << "O computador esta Desligado" <<endl;
                    }
                break;
                
                case 4:
                    if(state){
                        IniciarGPU();
                    }else{
                        cout << "O computador esta Desligado" <<endl;
                    }
                break;
                
                case 5:
                    if(state){
                        RemoverFicheiro();
                    }else{
                       cout << "O computador esta Desligado" <<endl;
                    } 
                break;
                
                default:
                    cout << "O opcao Invalida";
                break;
                
            }
        }
        
        void PerguntarOpcao(){
            int opcao;
            
            cout << "Digite a sua Opcao: " << endl;
            cout << "1-Formatar" <<endl;
            cout << "2-Abrir Pasta" <<endl;
            cout << "3-Iniciar SO" <<endl;
            cout << "4-Iniciar GPU" <<endl;
            cout << "5-Remover Ficheiro \n " <<endl;
            
            
            cin >> opcao;
            
            Executar(opcao);
        };
        
        void Input(){
            if(state){
                cout << "Recebendo um Input" <<endl;
            }else{
                cout << "O computador esta Desligado" <<endl;
            }
        }
};

int main(){
    
    AtributosPC PC1 = {"16GB", "RTX 3080", "Intel i9", "750W", "Cooler Master", "Asus ROG", "1TB SSD", "Teclado, Rato", "3 Fans", {'M', 'T', 'R', 'T', 'S'}};
    
    Computer Computer(PC1);
    
    Computer.Ligar();
    Computer.PerguntarOpcao();
    
    return 0;
}
