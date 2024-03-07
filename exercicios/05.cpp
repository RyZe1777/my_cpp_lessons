#include <iostream>
using namespace std;

int array [10] = {1,2,3,4,5,6,7,8,9};

int somaArray(){
    int soma = 0;
    for(int i = 0 ; i <= 9; i++){
        soma += array[i];
    }
    return soma;
}

int main(){
    cout << somaArray() <<endl;
}
