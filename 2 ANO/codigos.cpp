                                                            STRUCTS
#include <iostream>
using namespace std;

struct livro{
    string autor;
    string titulo;
    string subtitulo;
    string isbn;
    string data;
};

void inserelivro(livro &l){
    cout << "Qual o titulo do livro: ";
    cin >> l.titulo;
}

void mostralivro(livro l){
    cout << "O titulo do livro é: " << l.titulo << endl;
}

int main(){

    livro livro1;
    livro livro2;
    inserelivro(livro1);
    mostralivro(livro1);

    return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                        FUCTION_OVERLOADING
using namespace std;
#include <iostream>


int soma(int x, int y){      
    return x + y;
}

float soma(float x, float y){
    return x + y;
}

double soma(double x, double y){
    return x + y;
}
----------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                RECURSION
using namespace std;
#include <istream>

int sum(int k){
    if(k > 0) {
        return k + sum(k - 1);
    }else{
        return 0;
    }
}


int main(){
    int result = sum(10);
    cout << result;
    return 0;
}