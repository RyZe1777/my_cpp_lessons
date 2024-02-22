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