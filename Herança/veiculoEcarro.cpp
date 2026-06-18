//Herança
// Aula 08 - 17/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
#include <string>
using namespace std;

// Classe pai
class Veiculo {
public:
    string marca;

    Veiculo(string marca) {
        this->marca = marca;
        cout << "Veiculo criado!" << endl;
    }
};

// Classe filha
class Carro : public Veiculo {
public:
    string modelo;

    Carro(string marca, string modelo) : Veiculo(marca) {
        this->modelo = modelo;
        cout << "Carro criado!" << endl;
    }

    void exibir() {
        cout << "Marca: " << marca << " | Modelo: " << modelo << endl;
    }
};

int main() {
    Carro c("Toyota", "Corolla");
    c.exibir();
    return 0;
}