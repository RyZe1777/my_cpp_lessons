#include <iostream>

using namespace std;

struct Sumo{
    
    string sabor;
    float preco;
    string quantidade;
    string acucar;
    string energia;
};


class Refrigerante {
    
    public:
    
    bool state; //aberto fechado
    Sumo lata; //var do tipo sumo
    
    Refrigerante(Sumo Sumo){
        this-> lata = Sumo;
        this-> state = false;
    }
    
    void acoes(){
        
        int opcao;
        
        cout << "1. Abrir Lata" << endl;
        cout << "2. Beber" << endl;
        cout << "3. Meter No Lixo\n" << endl;
        cin >> opcao;
        
        switch(opcao){
            case 1:
                AbrirLata();
                break;
            
            case 2:
                BeberLata();
                break;
                
            case 3:
                MeterLixo();
                break;
        }

    }
    
    private:
    
        void listarSumo(){
            
        cout << "Sabor: " << lata.sabor << endl;
        cout << "Preço: " << lata.preco << endl;
        cout << "Quantidade: " << lata.quantidade << endl;
        cout << "Açúcar: " << lata.acucar << endl;
        cout << "Energia: " << lata.energia << endl;
        
        }
        
        void AbrirLata(){
            if(state){
                cout << "\nA lata ja esta aberta" <<endl;
                
            }else{
                cout << "\nVamos Abrir a lata" <<endl;
                this-> state = true;
            }

        }
        
        void BeberLata(){
            if(state){
                cout << "\nEsta a bebendo o Refrigerante" <<endl;
            }else{
                cout << "\nAbra a lata Primeiro" <<endl;
            }
        }

        void MeterLixo(){
            if(state){
                cout << "\nColocando a Lata no Lixo" <<endl;
            }else{
                cout << "\nNao podes meter no lixo pois ainda esta fechada" <<endl;
            }
        }

};

int main(){
    
    Sumo sumo1{"laranja", 1.60, "330 ml", "3g", "17kcal"};
    
    Refrigerante fanta(sumo1);
    fanta.acoes();
    
}
