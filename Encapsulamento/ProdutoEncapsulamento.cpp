// Encapsulamento
// Aula 07 - 16/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
#include <string>
using namespace std;

class Produto {
private:
    string nome;
    float preco;

public:
    // Construtor
    Produto(string nome, float preco) {
        this->nome = nome;
        set_preco(preco);
    }

    // Setter com validação
    void set_preco(float preco) {
        if (preco <= 0) {
            cout << "Erro: preco nao pode ser zero ou negativo!" << endl;
        } else {
            this->preco = preco;
        }
    }

    // Getters
    string get_nome() {
        return nome;
    }

    float get_preco() {
        return preco;
    }

    void exibir() {
        cout << "Produto: " << nome << " | Preco: R$ " << preco << endl;
    }
};

int main() {
    Produto p1("Notebook", 3500.00);
    Produto p2("Mouse", 150.00);

    p1.exibir();
    p2.exibir();

    cout << "\n-- Testando validacao --" << endl;
    p1.set_preco(-100); // Deve mostrar erro
    p2.set_preco(0); // Deve mostrar erro
    
    cout << "\n-- Precos apos validacao --" << endl;
    p1.exibir();
    p2.exibir();
    return 0;
}