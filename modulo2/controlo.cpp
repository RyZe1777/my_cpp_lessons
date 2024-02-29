#include <iostream>
using namespace std; 



/**
 * @brief Funçao que calcula a soma dos numeros até um determinado limite
 * @param limite - limite para a soma
 * @return soma dos numeros até ao limite
*/


int somaNum(int limite){
    int soma=0;
    for(int x=1; x<=limite; x++){
        soma += x;
    }
    return soma;
}
int getLimite(){

    int limite;
    cout << "Qual o limite que V. Exa quer: ";
    cin >> limite;

    return limite;
}


int main(){

    system("clear");
    int limite;
    limite = getLimite();
    cout << "Total: " << somaNum(limite) << endl;
    return 0;
}
