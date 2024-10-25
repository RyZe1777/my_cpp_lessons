#include <iostream>
#include "acoes.h"
#include <string>

using namespace std;

class Carro : public Acoes{ //herança 
    private:
        string marca;
        string modelo;


    public:
        Carro(string marca, string modelo);
};