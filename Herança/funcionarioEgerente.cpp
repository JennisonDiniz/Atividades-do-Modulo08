//Herança
// Aula 08 - 17/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
using namespace std;

// Classe pai
class Funcionario {
public:
    string nome;
    float salario;

    Funcionario(string nome, float salario) {
        this->nome = nome;
        this->salario = salario;
    }

    virtual void mostrarSalario() {
        cout << "Funcionario: " << nome << " | Salario: R$ " << salario << endl;
    }
};

// Classe filha
class Gerente : public Funcionario {
public:
    Gerente(string nome, float salario) : Funcionario(nome, salario) {}

    void mostrarSalario() override {
        float bonus = salario * 1.20;
        cout << "Gerente: " << nome << " | Salario com bonus (20%): R$ " << bonus << endl;
    }
};

int main() {
    Funcionario f("Carlos", 3000);
    Gerente g("Ana", 5000);

    f.mostrarSalario();
    g.mostrarSalario();

    return 0;
}