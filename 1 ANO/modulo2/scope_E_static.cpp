#include <iostream>
using namespace std;

const float PI = 3.1415; // variavel global

int teste(){
    static int xpto = 3; //variavel privadada
    return xpto;
}

int main(){
    
    cout << teste()*teste() << endl;

}
