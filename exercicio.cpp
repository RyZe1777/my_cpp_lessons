#include <iostream>
using namespace std;

struct Produto
{
    string nome;
    float preco;
    int quantidade;

};

void menu(){
    system("clear");
    cout << "==========================" <<endl;
    cout << "          MENU" <<endl;
    cout << "==========================" <<endl;
    cout << "1-Adicionar Produto" <<endl;
    cout << "2-Exibir Produto" <<endl;
    cout << "3-Calcular Valor total de Stock" <<endl;
    cout << "0-SAIR" <<endl;
    cout << "==========================" << endl;

}

int getOpcao(){

    int opcao;
    cout << "Digite a sua opcao: ";
    cin >> opcao;

    return opcao;
}



void adicionarProduto(Produto produtos[], int& quantidadeAtual){
    cout << "Qual o Nome do Produto: " << endl;
    cin >> produtos[quantidadeAtual].nome;

    cout << "Qual o Preço do Produto: " <<endl ;
    cin >> produtos[quantidadeAtual].preco;

    cout << "Qual a Quantidade do Produto: " <<endl;
    cin >> produtos[quantidadeAtual].quantidade;

    quantidadeAtual++;
    cout << "Produto Adicionado Com Sucesso!" <<endl;
}

void exibirProdutos(const Produto produtos[], int quantidadeAtual){
    if (quantidadeAtual == 0){
        cout << "Nenhum Produto Encontrado" <<endl;
    }
}


int main(){

    menu();
  
    Produto produtos[150];
    int quantidadeAtual = 0;
    int opcao = getOpcao();

    switch (opcao){
    case 1: 
        adicionarProduto(produtos,quantidadeAtual);
        break;

    case 2:
        ;
        break;


    case 3:
        ;
        break;

    case 4:
        ;
        break;

    default:
        break;
    }

    return 0;
}
