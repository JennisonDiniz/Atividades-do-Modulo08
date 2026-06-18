//Herança
// Aula 08 - 17/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
#include <string>
using namespace std;

// =============================================
// BOA PRÁTICA 1: "A nova classe É UM tipo da outra?"
// Carro É UM Veiculo ✔
// Motor NÃO É UM Carro ✘ (seria composição)
// =============================================

class Veiculo {
public:
    string marca;
    int ano;

    // BOA PRÁTICA 3: construtor inicializa todos os atributos
    Veiculo(string marca, int ano) {
        this->marca = marca;
        this->ano   = ano;
    }

    // BOA PRÁTICA 2: virtual garante sobrescrita correta
    virtual void exibir() {
        cout << "Veiculo | Marca: " << marca << " | Ano: " << ano << endl;
    }
};

// =============================================
// BOA PRÁTICA 4: hierarquia clara e simples
// Veiculo → Carro (apenas 1 nível)
// =============================================

class Carro : public Veiculo {
public:
    string modelo;

    Carro(string marca, int ano, string modelo)
        : Veiculo(marca, ano) {   // chama construtor pai
        this->modelo = modelo;
    }

    // BOA PRÁTICA 2: override garante que estamos sobrescrevendo certo
    void exibir() override {
        cout << "[Carro] Marca: " << marca
             << " | Modelo: "    << modelo
             << " | Ano: "       << ano << endl;
    }
};

// =============================================
// BOA PRÁTICA 5: composição em vez de herança
// Motor NÃO herda de Carro — ele É PARTE DO Carro
// =============================================

class Motor {
public:
    int cavalos;

    Motor(int cavalos) {
        this->cavalos = cavalos;
    }

    void exibir() {
        cout << "   Motor: " << cavalos << " cv" << endl;
    }
};

class CarroEsportivo : public Veiculo {
public:
    string modelo;
    Motor  motor;   // composição: Carro TEM UM Motor

    CarroEsportivo(string marca, int ano, string modelo, int cv)
        : Veiculo(marca, ano), motor(cv) {
        this->modelo = modelo;
    }

    void exibir() override {
        cout << "[Esportivo] Marca: " << marca
             << " | Modelo: "        << modelo
             << " | Ano: "           << ano << endl;
        motor.exibir();
    }
};

// =============================================
// BOA PRÁTICA 6: teste todas as classes!
// =============================================

int main() {
    cout << "===== Teste das Boas Praticas =====" << endl << endl;

    // Teste 1 — herança simples
    cout << "-- Heranca simples --" << endl;
    Veiculo v("Generico", 2020);
    Carro   c("Toyota", 2022, "Corolla");
    v.exibir();
    c.exibir();

    // Teste 2 — polimorfismo (virtual + override)
    cout << "\n-- Polimorfismo (virtual + override) --" << endl;
    Veiculo* ptr1 = new Carro("Honda", 2023, "Civic");
    ptr1->exibir();   // chama exibir() de Carro, não de Veiculo
    delete ptr1;

    // Teste 3 — composição
    cout << "\n-- Composicao (Carro TEM Motor) --" << endl;
    CarroEsportivo ce("Ferrari", 2024, "F8", 710);
    ce.exibir();

    return 0;
}