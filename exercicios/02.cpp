#include <iostream>
using namespace std;
void tabuada(int n){
    for(int i = 1; i <= 10; i++){
        cout << n << " X " << i << " = " << n * i << endl;

    }
}

int main(){
    int x = 0;
    cout << "valor de x: ";
    cin >> x;
    tabuada(x);
}


