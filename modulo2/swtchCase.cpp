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

void menu(){
    cout << "==========================" <<endl;
    cout << "          MENU" <<endl;
    cout << "==========================" <<endl;
    cout << "1-soma" <<endl;
    cout << "2-multiplicaçao" <<endl;
    cout << "3-divisao" <<endl;
    cout << "4-resto da divisao" <<endl;
    cout << "==========================" << endl;

}


int getOpcao(){

    int opcao;
    cout << "Digite a sua opcao" <<endl;
    cin >> opcao;

    return opcao;
}

void excutaCalculo(int i, int x, int y){


    switch (i)
    {
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

    default:
        break;
    }

}





int main(){

    menu();


    return 0;
}


