// Encapsulamento
// Aula 07 - 16/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Biblioteca {
private:
    string nome;
    vector<string> livros;

public:
    // Constructor
    Biblioteca(string nome) {
        this->nome = nome;
    }

    // Getter - retorna o nome da biblioteca
    string getNome() {
        return nome;
    }

    // Setter - altera o nome apenas se não for vazio
    void setNome(string novo_nome) {
        if (!novo_nome.empty()) {
            nome = novo_nome;
        } else {
            cout << "Nome invalido! O nome nao pode ser vazio." << endl;
        }
    }

    // Adiciona livro somente se título for válido e não existir na lista
    void adicionarLivro(string titulo) {
        if (titulo.empty()) {
            cout << "Título inválido! Não pode ser vazio." << endl;
            return;
        }

        auto it = find(livros.begin(), livros.end(), titulo);
        if (it == livros.end()) {
            livros.push_back(titulo);
            cout << "Livro '" << titulo << "' adicionado com sucesso!" << endl;
        } else {
            cout << "Livro '" << titulo << "' ja esta cadastrado!" << endl;
        }
    }

    // Exibe todos os livros cadastrados
    void listarLivros() {
        cout << "\n=== Livros da " << nome << " ===" << endl;
        if (livros.empty()) {
            cout << "Nenhum livro cadastrado." << endl;
        } else {
            for (int i = 0; i < livros.size(); i++) {
                cout << i + 1 << ". " << livros[i] << endl;
            }
        }
    }
};

int main() {
    // Desafio Extra
    Biblioteca b("Biblioteca Central");

    cout << "Biblioteca: " << b.getNome() << endl;

    // Adicionando 3 livros diferentes
    b.adicionarLivro("Dom Casmurro");
    b.adicionarLivro("O Senhor dos Aneis");
    b.adicionarLivro("Harry Potter");

    // Tentando adicionar livro repetido (sistema deve impedir)
    b.adicionarLivro("Dom Casmurro");

    // Exibindo a lista de livros
    b.listarLivros();

    // Alterando o nome da biblioteca
    b.setNome("Biblioteca Municipal");
    cout << "\nNovo nome: " << b.getNome() << endl;

    return 0;
}