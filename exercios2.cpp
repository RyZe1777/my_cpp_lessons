
//Crie um programa capaz de multiplicar uma 
//matriz bidimensional de inteiros por 
// um dado número e criar uma nova matriz
//com o produto


#include <iostream>
using namespace std;
double numero;

int arr[3][3] =  {{1, 5, 3},
                 {2, 5, 1},
                 {7, 5, 9}};

void multiplicacao(int n){
cout << "What's the number for the multiplication: ";
cin >> numero; 

 for(int l = 0; l < n; l++){
        for(int c = 0; c < n; c++){

            cout << arr[l][c]* numero;

        }
        cout << endl;
    }

};

int main(){

multiplicacao(3);

do{
      char keyPress; 
       
 cout << "\nWould you like to multiply again? [y/n] ";
        cin >> keyPress;

        if (keyPress == 'y') {
            system("clear"); multiplicacao(3);
        } else if (keyPress == 'n') {
            cout << "Bye" << endl;
            break;
        }
    } while (true);

    return 0;
}
