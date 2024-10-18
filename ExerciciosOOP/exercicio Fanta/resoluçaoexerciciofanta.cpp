#include <iostream>

using namespace std;

struct lata{

    string marca;
    string sabor;
    string validade;
    string fornecedor;
    string codBarras;
    string lote;
    string dataFabricacao;
    string infoFornecedor;
    string infoNutricional[5];
    string materialEmbalagem;

    double capacidade;
    double preco;
    double peso;

    bool status;
    
};

class Refrigerante {

    private:

        lata refrigerante;
        double qntSumoDisponivel;

    public:

        Refrigerante(lata lata){
            refrigerante = lata; //encapsulamento
            qntSumoDisponivel = lata.capacidade; 
        }

        void abrirLata(){
            if(refrigerante.status == false){
                cout << "\nA abrir a lata....." <<endl;
                refrigerante.status = true;
            }else{
                cout << "Lata ja esta aberta" <<endl;
            }
        }
   
        void beberLata(){

            double qnt;

            if(qntSumoDisponivel == 0){
                cout << "\nNao existe refrigerante disponivel" <<endl;
                return;
            }

            if(refrigerante.status){

                cout << "\nHá " << qntSumoDisponivel << " de ml de sumo disponivel";
                cout << "Digite a quantidade de refrigerante que deseja beber: ";
                cin >> qnt;

                if(qnt <= qntSumoDisponivel){ // qnt menor q a qntDisponivel
                    qntSumoDisponivel -= qnt; //diminuir a quantidade na lata
                    cout << "Voce Bebeu " << qnt << " ml de sumo" <<endl;
                }else{
                    cout << "Nao ha refrigerante suficiente" <<endl;
                }
            }else{
                cout << "A lata esta fechada" <<endl;
            }
        }
};


int main(){
        lata lata1 = {"Coca-cola","Cola","10/10/2023","Fornecedor XYZ","1234567890123",
                    "Lote123","01/10/2022","Contato: fornecedor@xyz.com",
                    {"Calorias: 140kcal", "Carboidratos: 35g", "Açúcares: 39g", "Sódio: 45mg", "Cafeína: 34mg"},
                    "Alumínio",350.0,5.00,0.350,false};


        Refrigerante refri1(lata1);

        while(true){
            int opcao;
            cout <<endl;
            cout << "1 - Abrir lata" <<endl;
            cout << "2 - Beber refrigerante" <<endl;
            cout << "3 - Sair " <<endl;
            cout << "Escolha uma Opcao: ";
            cin >> opcao;

            if(opcao == 1){
                refri1.abrirLata();
            }else if(opcao == 2){
                refri1.beberLata();
            }else if(opcao == 3){
                cout << "Saindo...." <<endl;
                break;
            }else{
                cout << "Opcao Invalida" <<endl;
            }
        }

    return 0;
}