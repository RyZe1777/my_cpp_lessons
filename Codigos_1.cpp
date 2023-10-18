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
-------------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include "asminhascontas.h"
using namespace std;

int a=2, b=3;

int main(){
    cout << oDobro(2) <<endl;

    return 0;
}
---------------------------------------------------------------------------------------------------
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
-----------------------------------------------------------------------------------------------------------
