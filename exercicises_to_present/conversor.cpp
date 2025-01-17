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

    
}


int main(){
    conversorLength();

    return 0;
}