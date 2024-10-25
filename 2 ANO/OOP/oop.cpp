#include <iostream>
#include <string>

using namespace std;

class Fatura{ //declarar uma classe 

    private://atributos privados do objeto fatura (acesso indireto)

        int id;
        string nome;
        int contribuinte;
        float valor;
        int sh;

    public: //atributos publicos do objeto fatura(acesso direto)

        void criarFatura(int id,string nome,int contribuinte,float valor){
            this -> id = id; //this -> id esta a referir-se ao id da linha 8
            this -> nome = nome;
            this -> contribuinte = contribuinte;
            this -> valor = valor;
        }

        void imprimir(){ //metodo
            cout << "\nID:" << id << endl;
            cout << "Nome:" << nome << endl;
            cout << "Contribuinte:" << contribuinte << endl;
            cout << "Valor:" << valor << endl;
        }

        //construtor com argumento sh
        Fatura(int sh){ //inicializa o atributo sh e imprime o valor de sh
            this ->sh = sh;
            cout << "\nO ash " << this ->sh <<endl;
        }

};

int main(){

    Fatura fatura1(2312312);
    Fatura fatura2(321312321231231);
    
    // Criando a fatura com dados
    fatura1.criarFatura(1, "João Silva", 123456789, 250.75);

    // Imprimindo os dados da fatura
    fatura1.imprimir();

    return 0;
}

