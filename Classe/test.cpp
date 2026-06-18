/*
#include <iostream>
#include <string>

using namespace std;

class Pessoa {
    // É boa prática declarar todos os atributos privados juntos e no início ou fim da classe
    private:
        string nome;
        int idade;
        string cpf; // Declarado apenas uma vez

    public:
        // Construtor inicializando todos os atributos
        Pessoa() {
            nome = "";
            idade = 0;
            cpf = "";
        }

        // Agora o compilador já conhece 'nome' e 'idade' porque foram declarados acima
        void apresentar(string nome, int idade) {
            cout << "Ola, meu nome e " << nome << " e tenho " << idade << " anos." << endl;
        }

        void setCpf(string cpf) {
            this->cpf = cpf;
        }

        string getCpf() {
            return cpf;
        }
};

int main() {
    Pessoa pessoa1;
    pessoa1.apresentar("Jennison", 25); // Apresentação inicial com nome e idade vazios
    pessoa1.setCpf("123.456.789-00");
    
    cout << "CPF: " << pessoa1.getCpf() << endl;

    return 0;
}

*/

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
    private:
        string nome;
        int idade;
        string cpf;

    public:
        // Construtor com valores padrão
        Pessoa() {
            nome = "Maicon"; // Nome padrão caso não seja alterado
            idade = 30;      // Idade padrão caso não seja alterada
            cpf = "";
        }

        // Métodos para o Nome
        void setNome(string nome) {
            this->nome = nome;
        }
        string getNome() {
            return nome;
        }

        // Métodos para a Idade
        void setIdade(int idade) {
            this->idade = idade;
        }
        int getIdade() {
            return idade;
        }

        // Métodos para o CPF
        void setCpf(string cpf) {
            this->cpf = cpf;
        }
        string getCpf() {
            return cpf;
        }

        // Método para apresentar a pessoa
        void apresentar() {
            cout << "Ola, meu nome e" << nome << " e tenho " << idade << " anos." << endl;
        }
};

int main() {
    Pessoa pessoa1;
    string cpf_digitado;

    // 1. Mostra o nome e a idade na tela usando o método apresentar
    pessoa1.apresentar();

    // 2. Pede para você digitar o CPF
    cout << "Digite o seu CPF: ";
    cin >> cpf_digitado; // Captura o que você digitar no teclado

    // Envia o CPF digitado para o objeto pessoa1
    pessoa1.setCpf(cpf_digitado);

    // Exibe o CPF que foi guardado
    cout << "CPF cadastrado com sucesso: " << pessoa1.getCpf() << endl;

    return 0;
}