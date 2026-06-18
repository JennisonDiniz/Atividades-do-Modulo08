// Encapsulamento
// Aula 07 - 16/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
#include <string>
using namespace std;

class Carro {
private:
    string marca;
    float velocidade;

public:
    // Construtor
    Carro(string marca) {
        this->marca = marca;
        this->velocidade = 0;
    }

    // Acelerar - aumenta a velocidade
    void acelerar(float valor) {
        velocidade += valor;
        cout << "Acelerando! Velocidade atual: " << velocidade << " km/h" << endl;
    }

    // Frear - reduz, mas nunca abaixo de zero
    void frear(float valor) {
        velocidade -= valor;
        if (velocidade < 0) {
            velocidade = 0;
        }
        cout << "Freando! Velocidade atual: " << velocidade << " km/h" << endl;
    }

    // Getters
    string get_marca() {
        return marca;
    }

    float get_velocidade() {
        return velocidade;
    }

    // Exibir informações
    void exibir() {
        cout << "Marca: " << marca << " | Velocidade: " << velocidade << " km/h" << endl;
    }
};

int main() {
    Carro c("Toyota");

    c.exibir();

    c.acelerar(50);
    c.acelerar(30);
    c.frear(20);
    c.frear(100); // Tenta ir abaixo de zero

    cout << "\n-- Estado final --" << endl;
    c.exibir();

    return 0;
}