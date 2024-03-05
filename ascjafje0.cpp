#include <iostream>
using namespace std;


const int NUM_CONST = 20;
void showASCIITable(){
    
    int i = 0;

    for(int x = 33; x<= 127 ; x++){ 
        cout << (char)x << "\t";
        i++;
        if (i % NUM_CONST ==0 || i >= 94){
            cout << "\n";
        }
    }
}

int main(){
    showASCIITable();
}