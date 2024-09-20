#include <iostream>
using namespace std;
void tabuada(int n){
    for(int i = 1; i <= 10; i++){
        cout << n << " X " << i << " = " << n * i << endl;

    }
}

int main(){
    int n = 0;
    cout << "valor de n: ";
    cin >> n;
    tabuada(n);
}


