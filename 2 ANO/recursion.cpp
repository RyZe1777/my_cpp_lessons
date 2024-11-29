using namespace std;
#include <iostream>

int sum(int k){
    if(k > 0) {
        return k + sum(k - 1); //k vai sempre diminuind ate chegar a 0 começando no 10-1 = 9
    }else{
        return 0;
    }
}


int main(){
    int result = sum(10);
    cout << result <<endl;
    return 0;
}