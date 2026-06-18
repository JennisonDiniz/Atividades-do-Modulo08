// Encapsulamento
// Aula 07 - 16/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Restaurante {
private:
    string nome;
    vector<string> cardapio;

public:
    // Constructor
    Restaurante(string nome) {
        this->nome = nome;
    }

    // Getter - retorna o nome do restaurante
    string getNome() {
        return nome;
    }

    // Setter - altera o nome apenas se for uma string não vazia
    void setNome(string novo_nome) {
        if (!novo_nome.empty()) {
            nome = novo_nome;
        } else {
            cout << "Nome invalido! O nome nao pode ser vazio." << endl;
        }
    }

    // Adiciona prato somente se ainda não existir
    void adicionarPrato(string prato) {
        auto it = find(cardapio.begin(), cardapio.end(), prato);
        if (it == cardapio.end()) {
            cardapio.push_back(prato);
            cout << "Prato '" << prato << "' adicionado ao cardapio!" << endl;
        } else {
            cout << "Prato '" << prato << "' já existe no cardapio!" << endl;
        }
    }

    // Exibe todos os pratos disponíveis
    void listarCardapio() {
        cout << "\n=== Cardapio do " << nome << " ===" << endl;
        if (cardapio.empty()) {
            cout << "Cardapio vazio!" << endl;
        } else {
            for (int i = 0; i < cardapio.size(); i++) {
                cout << i + 1 << ". " << cardapio[i] << endl;
            }
        }
    }

    // Verifica se o prato está no cardápio e atende o cliente
    void atenderCliente(string nome_cliente, string prato) {
        cout << "\nAtendendo " << nome_cliente << "..." << endl;
        auto it = find(cardapio.begin(), cardapio.end(), prato);
        if (it != cardapio.end()) {
            cout << "Pedido confirmado! " << nome_cliente 
                 << " pediu: " << prato << endl;
        } else {
            cout << "Desculpe, " << nome_cliente 
                 << "! O prato '" << prato << "' nao existe no cardápio." << endl;
        }
    }
};

int main() {
    // Desafio Extra
    Restaurante r("Sabor Caseiro");

    cout << "Restaurante: " << r.getNome() << endl;

    // Adicionando 3 pratos
    r.adicionarPrato("Frango Assado");
    r.adicionarPrato("Peixe Grelhado");
    r.adicionarPrato("Feijoada");

    // Tentando adicionar prato duplicado
    r.adicionarPrato("Frango Assado");

    // Listando cardápio
    r.listarCardapio();

    // Simulando 2 clientes (um com prato inexistente)
    r.atenderCliente("Joao", "Feijoada");
    r.atenderCliente("Maria", "Pizza");

    // Alterando o nome do restaurante
    r.setNome("Sabor da Vovo");
    cout << "\nNovo nome do restaurante: " << r.getNome() << endl;

    return 0;
}