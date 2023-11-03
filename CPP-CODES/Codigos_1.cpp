#include <iostream>
using namespace std;

int main()
{
    cout << "Digita um numero: " ;   //imprime no ecra
    cin >> numero;                   // le no teclado
    cout << "O numero que digitaste foi: " << numero << endl;
    return 0;

}
--------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

 int main() 
 {

 cout <<  "Hello  World\n" ;
 cout << "I'm a C++ program\n";
 cout << O_MEU_NUMERO;
 cout << endl;
 return 0;
}
--------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()

{
    string a = "1";
    string b = "2";
    cout << a+b << endl;     //impreme ecra
    // cin >> numero;         //Le no teclado
    // cout << "O numero que digitaste foi: "<< numero <<endl;
    return 0;
}
---------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

//area do circulo
//é PI * raio * raio, calcular a area do circulo
//com raio 10

int main(){

const double PI = 3.14159265359;
int r = 10;
double area = PI * r * r; 

}
------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()

{
    int a = 4;
    int b = 5;
    int c = 2;
    int d = 1;
    int resultado = a+(b*c)+d; 
    cout << resultado << endl;
    return 0;

}
-----------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()

{
    int a = 4;
    int b = 5;
    int c = 2;
    int d = 1;
    int resultado = a%c; 
    cout << resultado << endl;
    return 0;

}
------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()

{
    int a = 4;
    int b = 5;
    int c = 2;
    int d = 1;
    int resultado = ++a; 
    cout << resultado << endl;
    return 0;

}
------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()

{
    int a = 4;
    int b = 5;
    int c = 2;
    int d = 1;
    int resultado = --a; 
    cout << resultado << endl;
    return 0;

}
----------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;


int main()

{
    int a = 4;
    int b = 5;
    int c = 2;
    int d = 1;
    int resultado = a+=6; 
    cout << resultado << endl;
    return 0;

}
----------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;


int main()

{
    int a = 4;
    int b = 5;
    int c = 2;
    int d = 1;
    int resultado = a-=6; 
    cout << resultado << endl;
    return 0;

}
-----------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;


int main()

{
    int a = 4;
    int b = 5;
    int c = 2;
    int d = 1;
    int resultado = a-=2; 
    cout << resultado << endl;
    resultado = a+=2
    cout << resultado << endl;
    return 0;

}
------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()

{
    int a = 4;
    int b = 5;
    int c = 2;
    int d = 1;
    int resultado = a&=4; 
    cout << resultado << endl;
    return 0;
}
-----------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
using namespace std;

int a=2, b=3;

int main(){
    cout << max(a,b) <<endl;
    return 0;
}
-----------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int soma (int a, int b) {
    int resp = a+b;
    return resp;

}
------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int f(int x) { 
    int resp = 2*x 
    return resp;

}
---------------------------------------------------------------------------------------------------
                                    ELSE E ESSAS PORRAS
#include <iostream>
using namespace std;

 int a=10, b=12;

int main(){
   
   if ( a > b){
    cout << "é verdadeiro" << endl;
   }else{
    cout << "é mentira" << endl;
   }
    return 0;
}
-------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

 int a=10, b=12, c=9;

int main(){
   
   if ( a < b && b < c ){
    cout << "é verdade" << endl;
   }else{
    cout << "é mentira" << endl;
   }

return 0;
}
--------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

 int a=10, b=12, c=9;

int main(){
   
   if ( a < b || b < c ){
    cout << "é verdade" << endl;
   }else{
    cout << "é mentira" << endl;
   }

return 0;
}
-------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

 int a=10, b=12, c=9;

int main(){
   
   if ( a < b){
    cout << "é verdade" << endl;
    }else if (a<c){
        cout << "é verdade" << endl;
   }else{
    cout << "é mentira" << endl;
   }

return 0;
}
--------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;


int main(){
   int num;
   
   cout<< "Digite um numero:";
   cin >> num;
   
   if(num >= 0){
   cout<< "Positivo";
   }else{
      cout << "Negative";
   }
   return 0;

}
-----------------------------------------------------------------------------------------------------------
                                        BREAK
#include <iostream>
using namespace std;

int main(){
   

   int num; 
   cout<< "Digite um numero:";
   cin >> num;

switch (num)
{
case 1:
       cout << "o numero é 1" <<endl;
       break;

case 2:
      cout << "o numero é 2" <<endl;
      break;

default: 
     cout << "o numero nao é 1 nem 2" << endl;
     break;

}
return 0;
}
-------------------------------------------------------------------------------------------------------------
                                            WHILE 
#include <iostream>
using namespace std;

int main(){
   
int num=0;

   while (num < 5 ) {
     cout<< "Digite um numero:";
     cin >> num;
}
   return 0;
}
-------------------------------------------------------------------------------------------------------
                                         DO WHILE
#include <iostream>
using namespace std;

int main(){

int i=10;

   do {
    cout << "ola" << endl;
   } while (i !=10);

    return 0;

}
-------------------------------------------------------------------------------------------------------
                                        WHILE
#include <iostream>
using namespace std;

int main(){
    int i=10;
    while (i !=30) {
        cout << "ola" << endl;
    }
    return 0;
}
-------------------------------------------------------------------------------------------------------
                                        JOGO DA ADIVINHA SIMPLES :B
#include <iostream>
using namespace std;

int numSorte = 22;

int main(){
   
int num=0;

   while (numSorte != num) {
     cout<< "Qual o numero da sorte?";
     cin >> num;
}
cout << "Parabens, voce acertou!" << endl;

   return 0;
}
-----------------------------------------------------------------------------------------------------------

                             JOGO DA ADIVINHA SIMPLES UMA BECA AVANÇADO :B
    
#include <iostream>
using namespace std;
int numSorte = 22;
int main(){

int num=0;
while(numSorte != num){
     cout << "Qual o número da sorte? ";
     cin >> num;
     if(numSorte > num){ 
     cout << "O número da sorte é maior do que: " << num << endl;
     }else if(numSorte < num){
     cout << "O número da sorte é menor do que: " << num << endl;
     }else{
     cout << "Parabéns, você acertou!" << endl;
     }

}
cout << "Acabou o jogo!" << endl;
return 0;
}
-----------------------------------------------------------------------------------------------------------
                               JOGO DA ADIVINHA COM NUMEROS ALEATORIOS :B

#include <iostream>    
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

int num=0;
   srand((unsigned) time(0));
   int numSorte = 1+(rand()%100);  
   while(numSorte != num){
       
     cout << "Qual o número da sorte? ";
     cin >> num;
     if(numSorte > num){
     cout << "O número da sorte é maior do que: " << num << endl;
     }else if(numSorte < num){
     cout << "O número da sorte é menor do que: " << num << endl;
     }else{
     cout << "Parabéns, você acertou!" << endl;
    }
  }
cout << "Acabou o jogo!" << endl;
return 0;
}
-----------------------------------------------------------------------------------------------------------
                                            DOBRO
#include <iostream>
using namespace std;

int oDobro(int x) { 
    int resp = 2*x;
    return resp;

}

#include <iostream>
#include <cmath>
#include "asminhascontas.h"
using namespace std;

int a=2, b=3;

int main(){
    cout << oDobro(2) <<endl;
    return 0;

}
    //este dois codigos tem que ser em files diferentes mas precisam um do outro para funcionar
-------------------------------------------------------------------------------------------------------------
                                                FOR
#include <iostream>
using namespace std;

int main(){
    int n;
    for (int n=0; n<=10; n++){
        cout << n << endl;
    }
    return 0;
}
-------------------------------------------------------------------------------------------------------------
                                            FOR
#include <iostream>
using namespace std;

int main(){

    int test[4] = {7,8,9,7};

    for(int i=0; i<4; i++){
    cout << test[i] << endl;
}


return 0;
}
----------------------------------------------------------------------------------------------------------------------------
                                                ARRAY
#include <iostream>
using namespace std;

int main(){

string cars[] = {"volvo","BMW","Ford","Mazda","tesla"};
cout << cars[2] << "\n";
cars [2] = "Opel";
cout << cars[2] << "\n";

return 0;
}

