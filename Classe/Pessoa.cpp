// Orientações a Objetos
// Aula 06 - 15/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
    string nome;
    int idade;

public:
    // Construtor
    Pessoa(string n, int i) {
        nome = n;
        idade = i;
    }

    // Métodos Getters (necessários para o cout no main)
    string getNome() {
        return nome;
    }

    int getIdade() {
        return idade;
    }

    void exibirInformacoes() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
    }
};

int main() {
    // Correção: Passando os argumentos diretamente no construtor ao declarar o objeto
    Pessoa pessoa1("JENNISON DINIZ", 30);
    Pessoa pessoa2("ERIKA", 28);

    // Exibindo os dados usando os métodos get
    cout << "Nome: " << pessoa1.getNome() << endl;
    cout << "Idade: " << pessoa1.getIdade() << endl;
    cout << "Nome: " << pessoa2.getNome() << endl;
    cout << "Idade: " << pessoa2.getIdade() << endl;

    return 0;
}