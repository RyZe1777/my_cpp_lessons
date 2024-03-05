// C++ program to demonstrate casting

#include <iostream>
using namespace std;

int main(){
    
    int i = 10;
    float f = 3.14;
    char c = 'a';

    //Cast Implcito

    float f2 = i; 
    char c2 = i;

    cout << "f2: " << f2 << endl;
    cout << "c2: " << c2 << endl;

    //Cast explicito

    int i2 = (int)f;
    int i3 = (int)c;

    //cast de um inteiro para um char

    char c3 = (char)i;

    cout << "i2: " << i2 << endl;
    cout << "i3: " << i3 << endl;
}