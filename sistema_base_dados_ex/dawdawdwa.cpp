#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

const int prodMax = 5; // Número máximo de produtos

// Estrutura para armazenar informações do produto
struct Produto {
    int id;
    string nome;
    int quantidade;
    float preco;
    char status; // 'A' para ativo, 'D' para eliminado
};

// Função para carregar produtos do arquivo
void loadProdutos(Produto produtos[], int& quantidadeAtual, const string& filename) {
    ifstream file(filename);
    if (!file) return; // Se o arquivo não existir, sai da função

    while (file >> produtos[quantidadeAtual].id >> ws) {
        getline(file, produtos[quantidadeAtual].nome, ',');
        file >> produtos[quantidadeAtual].quantidade >> produtos[quantidadeAtual].preco >> produtos[quantidadeAtual].status;
        quantidadeAtual++;
    }
    file.close(); // Fecha o arquivo
}

// Função para salvar produtos no arquivo
void saveProdutos(const Produto produtos[], int quantidadeAtual, const string& filename) {
    ofstream file(filename);
    for (int i = 0; i < quantidadeAtual; i++) {
        file << produtos[i].id << "," << produtos[i].nome << "," << produtos[i].quantidade << "," 
             << produtos[i].preco << "," << produtos[i].status << endl;
    }
    file.close(); // Fecha o arquivo
}

// Função para adicionar um novo produto
void addProduto(Produto produtos[], int& quantidadeAtual) {
    if (quantidadeAtual >= prodMax) {
        cout << "----------------------------------------" << endl;
        cout << "Atingiu o limite máximo de produtos." << endl;
        return;
    }

    Produto newProduct;
    newProduct.status = 'A'; // Define status como ativo

    // Gera um novo ID
    newProduct.id = (quantidadeAtual == 0) ? 1 : produtos[quantidadeAtual - 1].id + 1;

    cout << "----------------------------------------" << endl;
    cout << "Insira o nome do produto: ";
    cin.ignore(); // Limpa o buffer
    getline(cin, newProduct.nome);
    cout << "----------------------------------------" << endl;
    cout << "Insira a quantidade do produto: ";
    cin >> newProduct.quantidade;
    cout << "----------------------------------------" << endl;
    cout << "Insira o preço do produto: ";
    cin >> newProduct.preco;

    produtos[quantidadeAtual] = newProduct; // Adiciona o novo produto à lista
    quantidadeAtual++;
    saveProdutos(produtos, quantidadeAtual, "produtos.txt"); // Salva os produtos no arquivo
    system("clear");
    cout << "----------------------------------------" << endl;
    cout << "Produto adicionado com sucesso." << endl;
}

// Função para consultar produtos
void consultarProdutos(const Produto produtos[], int quantidadeAtual) {
    cout << "Produtos cadastrados:" << endl;
    for (int i = 0; i < quantidadeAtual; i++) {
        if (produtos[i].status == 'A') { // Apenas produtos ativos
            cout << "ID: " << produtos[i].id << ", Nome: " << produtos[i].nome
                 << ", Quantidade: " << produtos[i].quantidade
                 << ", Preço: " << produtos[i].preco << "€, Status: " << produtos[i].status << endl;
        }
    }
}

// Função para alterar um produto
void alterarProduto(Produto produtos[], int quantidadeAtual) {
    int id;
    cout << "Insira o ID do produto a alterar: ";
    cin >> id;

    for (int i = 0; i < quantidadeAtual; i++) {
        if (produtos[i].id == id && produtos[i].status == 'A') {
            cout << "Insira o novo nome do produto: ";
            cin.ignore(); // Limpa o buffer
            getline(cin, produtos[i].nome);
            cout << "Insira a nova quantidade do produto: ";
            cin >> produtos[i].quantidade;
            cout << "Insira o novo preço do produto: ";
            cin >> produtos[i].preco;
            saveProdutos(produtos, quantidadeAtual, "produtos.txt"); // Salva as alterações no arquivo
            cout << "Produto alterado com sucesso." << endl;
            return;
        }
    }
    cout << "Produto não encontrado ou já eliminado." << endl;
}

// Função para eliminar um produto
void eliminarProduto(Produto produtos[], int quantidadeAtual) {
    int id;
    cout << "Insira o ID do produto a eliminar: ";
    cin >> id;

    for (int i = 0; i < quantidadeAtual; i++) {
        if (produtos[i].id == id) {
            produtos[i].status = 'D'; // Define o status como eliminado
            saveProdutos(produtos, quantidadeAtual, "produtos.txt"); // Salva as alterações no arquivo
            cout << "Produto eliminado com sucesso." << endl;
            return;
        }
    }
    cout << "Produto não encontrado." << endl;
}

// Função para exibir o menu
void showMenu() {
    cout << "----------------------------------------" << endl;
    cout << "                  MENU" << endl;
    cout << "----------------------------------------" << endl;
    cout << "1 - Adicionar Produto " << endl;
    cout << "2 - Consultar Produtos " << endl;
    cout << "3 - Alterar Produto " << endl;
    cout << "4 - Eliminar Produto " << endl;
    cout << "0 - Sair " << endl;
    cout << "----------------------------------------" << endl;
    cout << "Digite a sua opção: ";
}

void executaOpcao(){

Produto produtos[prodMax];
int quantidadeAtual = 0;
int escolha;
loadProdutos(produtos, quantidadeAtual, "produtos.txt"); // Carrega produtos do arquivo

    do {
        showMenu(); // Mostra o menu
        cin >> escolha; // Lê a escolha do usuário

        switch (escolha) {
        case 1:
            addProduto(produtos, quantidadeAtual); // Adiciona um produto
            break;
        case 2:
            consultarProdutos(produtos, quantidadeAtual); // Consulta produtos
            break;
        case 3:
            alterarProduto(produtos, quantidadeAtual); // Altera um produto
            break;
        case 4:
            eliminarProduto(produtos, quantidadeAtual); // Elimina um produto
            break;
        case 0:
            cout << "A sair do programa..." << endl; // Mensagem de saída
            break;
        default:
            cout << "Opção inválida! Voltando ao menu..." << endl; // Mensagem de erro
        }

    } while (escolha != 0); // Repete até que o usuário escolha sair
}

// Função principal que executa o programa
int main() {

    system("clear");
    executaOpcao();

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

