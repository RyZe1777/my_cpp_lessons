#include <iostream>
using namespace std;


int somaImpares(int n){
    int sum = 0;
    for(int i = 0; i<=n; i++){
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
