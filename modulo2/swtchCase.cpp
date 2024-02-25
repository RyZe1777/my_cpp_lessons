using namespace std;
#include <iostream>



void soma(int a, int b){
    cout << a + b <<endl;
}
void multi(int a, int b){
    cout << a * b <<endl;
}
void divi(int a, int b){
    cout << a / b <<endl;
}
void rest(int a, int b){
    cout << a % b <<endl;
}
void sub(int a, int b){
    cout << a - b <<endl;
}


void menu(){
    system("clear");
    cout << "==========================" <<endl;
    cout << "          MENU" <<endl;
    cout << "==========================" <<endl;
    cout << "1-soma" <<endl;
    cout << "2-multiplicaçao" <<endl;
    cout << "3-divisao" <<endl;
    cout << "4-resto da divisao" <<endl;
    cout << "5-subtracao" <<endl;
    cout << "==========================" << endl;

}

int getOpcao(){

    int opcao;
    cout << "Digite a sua opcao" <<endl;
    cin >> opcao;

    return opcao;
}

void executaCalculo(int opcao, int x, int y){


switch (opcao){
    case 1: 
        soma(x,y);
        break;


    case 2:
        multi(x,y);
        break;


    case 3:
        divi(x,y);
        break;

    case 4:
        rest(x,y);
        break;


    case 5:
        sub(x,y);
        break;

    default:
        break;
    }

}

int getValorx(){

    int x;
    cout << "Digite o Valor de x: ";
    cin >> x;
    return x;
}

int getValory(){
    int y;
    cout << "Digite o Valor de y: ";
    cin >> y;
    return y;
}

int main(){

    int a;
    int b;
    int opcao;
    menu();
    opcao = getOpcao();
    a = getValorx();
    b = getValory();
    executaCalculo(opcao,a,b);

    return 0;
}
