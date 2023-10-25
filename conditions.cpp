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