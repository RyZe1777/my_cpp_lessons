#include <iostream>
using namespace std;

//CONTAS

int a;
int b;
const double PI = 3.14159;
int r;

//VARIAVEIS ARRAY 5

float notas[5];
float soma;
float media;
float maior = 0;
float menor = 0;
// estes valores garantem que as notas inseridas durante o loop serão corretamente atualizadas para a menor e maior nota encontradas ate ao momento

//VARIAVEIS ARRAY 10

float maior_10 = 0;
float menor_10 = 10; 
int array[10]= {10,56,9,12,70,23,32,69,17,80};

//VARIAVEIS TABUADA

int n;


int main(){
    
    //CONTAS
    
    cout <<"Qual o valor de a: " <<endl; 
        cin >> a;
    cout <<"Qual o valor de b: " <<endl; 
        cin >> b;
 
    cout << a+b <<endl; //adiçao
    cout << a*b <<endl; //multiplicaçao
    cout << a-b <<endl; //subtraçao

    if(a !=0){
        cout << a/b <<endl; //divisao
        cout << a%b <<endl; //resto da divisao
    }else{
        cout <<"Nao podemos dividir por 0" <<endl; 
    }
    
    //AREA DO CIRCULO
    
    cout << "Vamos calcular a area de um circulo!! " <<endl;
    cout << "Qual o valor do raio (r): " <<endl; 
    cin >> r;

    cout << "A area do circulo e: ";
    cout << PI * r*r <<endl; //formula para calcular a area do circulo
    
    
    //NOTAS DOS ALUNOS
    

    cout << "Quais sao as notas dos alunos? " <<endl;
  
    for(int x=0; x<5; x++){
        cout <<"Aluno" << x + 1 << ":" <<endl;
        cin >> notas[x];
        soma += notas[x]; // soma as notas todos q escolhemos para armazenar no ciclo for
        media = soma/5; //media 
    }
        menor = notas[0]; //igualar 1 index
        maior = notas[0];
    
    for(int y=0; y<5; y++){ //5 vezes o código que vai comparar se a nota do indice atual é menor do que a nota da variavel MENOR
        if(notas[y] < menor){ 
        menor = notas[y];
        }
    }
    for(int p=0; p<5; p++){ 
        if(notas[p] > maior){
        maior = notas[p];
        }
    }

    cout <<"Media: " << media <<endl;
    cout <<"Menor: " << menor <<endl;
    cout <<"Maior: " << maior <<endl;
    
    //ARRAY DE 10

    cout << "Vamos imprimir o máximo e mínimo do array 10:" << endl;
    for (int z = 0; z < 10; z++) {
        if (array[z] < menor_10) {
            menor_10 = array[z];
        }
        if (array[z] > maior_10) {
            maior_10 = array[z];
        }
    }

    cout << "Menor: " << menor_10 << endl;
    cout << "Maior: " << maior_10 << endl;

    //TABUADA

    cout << "Vamos fazer a Tabuada!!" << endl;
    cout << "Digite um número: ";
    cin >> n;
    cout << "Tabuada de " << n << ":" << endl;
    for (int k = 1; k <= 10; ++k) {
        cout << n << " x " << k << " = " << n * k << endl;
    }


    return 0;
}