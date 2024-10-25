#include <iostream>
using namespace std;

Class Carro{
    public:                              // especificador de acesso
        //int velocidade;
        //int velocidadeMax;
        int anos;                       // atributo (int)
        string marca;                   // atributo (string)
        void setVelocidade(int v){      // metodo
            velocidade = v;
        }
        //void insere(string x, int y);
        //void mostra();
    private:
        int velocidade;                 // atributo (int)
}


int main(){
    Carro carro1;

    carro1.anos = 15;
    carro1.marca = "Porsche"

    return 0;
}