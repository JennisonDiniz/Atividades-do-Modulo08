// Encapsulamento
// Aula 07 - 16/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz
#include <iostream>
#include <vector>
using namespace std;

// Classe Aluno
class Aluno {
private:
    string nome;
    int idade;
    string curso;

public:
    // Constructor
    Aluno(string nome, int idade, string curso) {
        this->nome = nome;
        this->idade = idade;
        this->curso = curso;
    }

    // Getters
    string getNome() { return nome; }
    int getIdade() { return idade; }
    string getCurso(){ return curso; }

    // Setters com validação
    void setNome(string novo_nome) {
        if (!novo_nome.empty()) {
            nome = novo_nome;
        } else {
            cout << "Nome invalido!" << endl;
        }
    }

    void setIdade(int nova_idade) {
        if (nova_idade > 0 && nova_idade < 120) {
            idade = nova_idade;
        } else {
            cout << "Idade invalida!" << endl;
        }
    }

    void setCurso(string novo_curso) {
        if (!novo_curso.empty()) {
            curso = novo_curso;
        } else {
            cout << "Curso invalido!" << endl;
        }
    }

    // Método apresentar
    void apresentar() {
        cout << " Nome: " << nome
             << " | Idade: " << idade
             << " | Curso: " << curso << endl;
    }
};

// Classe Escola
class Escola {
private:
    string nome;
    vector<Aluno> alunos;

public:
    // Constructor
    Escola(string nome) {
        this->nome = nome;
    }

    // Getter e Setter do nome
    string getNome() { return nome; }

    void setNome(string novo_nome) {
        if (!novo_nome.empty()) {
            nome = novo_nome;
        } else {
            cout << "Nome da escola invalido!" << endl;
        }
    }

    // Adiciona aluno à lista
    void adicionarAluno(Aluno aluno) {
        alunos.push_back(aluno);
        cout << "Aluno '" << aluno.getNome()
             << "' matriculado com sucesso!" << endl;
    }

    // Lista todos os alunos matriculados
    void listarAlunos() {
        cout << "\n=== Alunos da " << nome << " ===" << endl;
        if (alunos.empty()) {
            cout << "Nenhum aluno matriculado." << endl;
        } else {
            for (int i = 0; i < alunos.size(); i++) {
                cout << i + 1 << ". ";
                alunos[i].apresentar();
            }
        }
    }
};

int main() {
    // Desafio Extra
    Escola escola("Escola Futuro");

    cout << "Escola: " << escola.getNome() << endl << endl;

    // Criando 2 alunos com nome, idade e curso
    Aluno a1("Carlos Silva", 17, "Informatica");
    Aluno a2("Ana Souza", 16, "Administracao");

    // Adicionando alunos à escola
    escola.adicionarAluno(a1);
    escola.adicionarAluno(a2);

    // Exibindo lista de alunos
    escola.listarAlunos();

    // Testando alterações com métodos set
    cout << "\n--- Atualizando dados ---" << endl;
    a1.setNome("Carlos Oliveira");
    a1.setIdade(18);
    a1.setCurso("Redes de Computadores");

    cout << "Dados atualizados de a1: ";
    a1.apresentar();

    // Alterando nome da escola
    escola.setNome("Escola Futuro Digital");
    cout << "\nNovo nome da escola: " << escola.getNome() << endl;

    // Testando validações
    cout << "\n--- Testando validacoes ---" << endl;
    a2.setIdade(-5); // Idade inválida
    a2.setNome(""); // Nome inválido
    escola.setNome(""); // Nome inválido

    return 0;
}
