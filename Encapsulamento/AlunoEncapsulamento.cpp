// Encapsulamento
// Aula 07 - 16/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
#include <string>
using namespace std;

class Aluno {
private:
    string nome;
    float nota;

public:
    // Construtor
    Aluno(string nome, float nota) {
        this->nome = nome;
        set_nota(nota); // já valida a nota
    }

    // Setter com validação
    void set_nota(float nota) {
        if (nota < 0 || nota > 10) {
            cout << "Erro: nota deve estar entre 0 e 10!" << endl;
        } else {
            this->nota = nota;
        }
    }

    // Getters
    string get_nome() {
        return nome;
    }

    float get_nota() {
        return nota;
    }
};

int main() {
    Aluno a("Carlos", 8.5);

    cout << "Nome: " << a.get_nome() << endl;
    cout << "Nota: " << a.get_nota() << endl;

    a.set_nota(12); // Deve mostrar mensagem de erro

    return 0;
}