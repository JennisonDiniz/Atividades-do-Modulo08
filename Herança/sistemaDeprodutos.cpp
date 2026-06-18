//Herança
// Aula 08 - 17/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
#include <string>
using namespace std;

// Classe base
class Produto {
public:
    string nome;
    float preco;

    Produto(string nome, float preco) {
        this->nome = nome;
        this->preco = preco;
    }

    virtual void exibir() {
        cout << "Nome: " << nome << " | Preco: R$ " << preco << endl;
    }
};

// Subclasse Livro
class Livro : public Produto {
public:
    string autor;

    Livro(string nome, float preco, string autor) : Produto(nome, preco) {
        this->autor = autor;
    }

    void exibir() override {
        cout << "[Livro] Nome: " << nome << " | Preco: R$ " << preco << " | Autor: " << autor << endl;
    }
};

// Subclasse Eletronico
class Eletronico : public Produto {
public:
    string marca;

    Eletronico(string nome, float preco, string marca) : Produto(nome, preco) {
        this->marca = marca;
    }

    void exibir() override {
        cout << "[Eletronico] Nome: " << nome << " | Preco: R$ " << preco << " | Marca: " << marca << endl;
    }
};

int main() {

    Livro l1("Dom Casmurro",  45.90, "Machado de Assis");
    Livro l2("O Alquimista",  39.90, "Paulo Coelho");

    Eletronico e1("Smartphone", 1999.90, "Samsung");
    Eletronico e2("Notebook",   3500.00, "Dell");

    cout << "=== Livros ===" << endl;
    l1.exibir();
    l2.exibir();

    cout << "\n=== Eletronicos ===" << endl;
    e1.exibir();
    e2.exibir();

    return 0;
}