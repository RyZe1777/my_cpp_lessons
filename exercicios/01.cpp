#include <iostream>
using namespace std;


int somaImpares(int x){
    int sum = 0;
    for(int i = 0; i<=x; i++){
        if(i % 2 !=0){
            sum += i;
        }
    }    
    return sum;
}


int main(){
    int n;
    cout << "Qual e o valor de n?" <<endl;
    cin >> n;
    int sum = somaImpares(n);
    cout << "o resultado e:" <<somaImpares(n) <<endl;
}
