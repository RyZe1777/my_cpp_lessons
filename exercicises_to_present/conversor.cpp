#include <iostream>
using namespace std;

void conversorLength(){
    double km,mi;
    int escolha;

    cout << "Escolha uma opçao: " <<endl;
    cout << "1 - Kilometros para Milhas; " <<endl;
    cout << "2 - Milhas para Kilometros; " <<endl;
    cout << "Digite a sua opção: ";
    cin >> escolha; 

    if(escolha == 1){
        cout << "Digite o valor em KM: ";
        cin >> km;
        cout << "O valor em Milhas é " << km / 1.6093445 <<endl;
    }else if(escolha == 2){
        cout << "Digite o valor em Milhas: ";
        cin >> mi;
        cout << "O valor em Kilometros é " << mi * 1.6093445 <<endl;
    }else{
        cout << "Escolha invalida!" <<endl;
    }
}

void conversorTemp(){
    double cel,fah;
    int escolha;

    cout << "Escolha uma opçao: " <<endl;
    cout << "1 - Celsius para Fahrenheit" <<endl;
    cout << "2 - Fahrenheit para Celsius" <<endl;
    cout << "Digite a sua opção: ";
    cin >> escolha;
    

    if(escolha == 1){
        cout << "Digite o valor em Celsius: ";
        cin >> cel;
        cout << "O valor em Fahrenheit é " << (cel * 1.8) + 32 <<endl; 
    }else if(escolha == 2){
        cout << "Digite o valor em Fahrenheit: ";
        cin >> fah;
        cout << "O valor em Celsius é: " << (fah - 32) / 1.8 <<endl; 
    }else{
        cout << "Escolha Invalida!" <<endl;
    }

}

void conversorWeight(){
    int kg,li;
    int escolha;

    cout << "Escolha uma opçao: " <<endl;
    cout << "1 - Kilogramas para Libras " <<endl;
    cout << "2 - Libras para Kilogramas" <<endl;
    cout << "Digite a sua opção: ";
    cin >> escolha;

    if(escolha == 1){
        cout <<"Digite o valor em Kilogramas: ";
        cin >> kg;
        cout << "O valor em Libras é: " << kg * 2.20462 <<endl;
    }else if(escolha == 2){
        cout <<"Digite o valor em Libras: ";
        cin >> li;
        cout << "O valor em kilogramas é: " << li / 2.20462 <<endl;
    }else{
        cout <<"Opçao Invalida!" <<endl;
    }

}


int main(){
    int choice;

    cout << "Bem-vindo ao Conversor fixolas " <<endl;
    cout << "Escolha o Tipo de conversao que deseja fazer " <<endl;
    cout << "1 - Comprimento" <<endl;
    cout << "2 - Temperatura" <<endl;
    cout << "3 - Peso" <<endl;
    cout << "Digite a sua escolha: ";
    cin >> choice;

    switch (choice){
    case 1: 
        conversorLength();
        break;
    case 2:
        conversorTemp();
        break;
    case 3:
        conversorWeight();
        break;
    default:
        cout << "Digite uma opçao valida" <<endl;
        break;
    }

    return 0;
}