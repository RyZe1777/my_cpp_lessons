#include <iostream>
#include <string>

using namespace std;

struct Refrigerante{
    string marca;
    string sabor;
    string tipo;
    string validade;
    string ingredientes;
    bool state; //falso-fechado vdd-aberto
    bool agitada;
        
};


class Refrigerante{

    private:

    bool state; //falso-fechado vdd-aberto
    bool agitada;

    public:

        Refrigerante(){
            this-> state = false;
            this-> agitada = true;
            cout << "A lata foi instanciada" <<endl;
        }

        void BeberLata(){
            if(state){
                cout << "Esta a bebendo o Refrigerante" <<endl;
            }else{
                cout << "Abra a lata Primeiro" <<endl;
                AbrirLata();
                cout << "Agora podes beber o Refrigerante" <<endl;
            }
        }

        void AgitaLata(){
            if(agitada){
                cout << "Explodiu" <<endl;
            }else{
                cout << "Nao vai explodir" <<endl;
            }
        }

        void AbrirLata(){
            if(state){
                cout << "A lata ja esta aberta" <<endl;
                
            }else{
                cout << "Vamos Abrir a lata" <<endl;
                this-> state = true;
                AgitaLata();
            }

        }
    
};

int main() {

    Refrigerante latinha;
    latinha.AbrirLata();
    latinha.BeberLata();  // Try opening the can twice


    return 0;
}
