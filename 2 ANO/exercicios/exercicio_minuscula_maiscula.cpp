#include <iostream>

using namespace std;

int main(){

    char letra;
    cout << "digite uma letra: ";
    cin >> letra;

    cout << "Letra " << letra << " maiuscula = " << (char)(letra - 32) << endl; 
}