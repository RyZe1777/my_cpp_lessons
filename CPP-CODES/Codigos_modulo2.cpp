                                                            PRINTF

#include <stdio.h>

int main(){

printf("caracteres: %c %c %c \n ",'a','b','c');
printf("Decimals: %d %ld \n",1997,65000L);
printf("preceding with blanks: %10d, \n", 19778111);
printf("with trick: %*d \n",10,10);


    
}
-----------------------------------------------------------------------------------------------------------------------------------------------
                                                                SCANF 

int main(){

char nome[50];

printf("Nome: ");
scanf("%s", nome);
printf("ola %s \n", nome);

}

------------------------------------------------------------------------------------------------------------------------------------------------
                                                            SWITCH 

using namespace std;
#include <iostream>


void opcao1(){
    cout << "opcao 1" <<endl;
}

void opcao2(){
    cout << "opcao 2" <<endl;
}

void opcao3(){
    cout << "opcao 3" <<endl;
}


int main(){


    int n;
    cin >> n;

    switch (n){
        
        case 1: 
            opcao1();
            break;
        case 2:
            opcao2();
            break;
        case 3:
            opcao3();
            break;
        default:
            cout << "n e dif de 1, 2 e 3" << endl;
            break;

    }

    return 0;

}
-----------------------------------------------------------------------------------------------------------------------------------------------------
                                                            SWITCH

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
    system("clear");
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

-------------------------------------------------------------------------------------------------------------------------------------------------------
