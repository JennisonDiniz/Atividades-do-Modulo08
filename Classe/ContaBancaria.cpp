// Orientações a Objetos
// Aula 06 - 15/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
#include <string>
using namespace std;

class ContaBancaria {
private:
    string titular;
    double saldo;   

public:
    ContaBancaria(string nome, double valor) {
        titular = nome;
        saldo = valor;
    }   
    void depositar(double valor) {
        saldo += valor;
        cout << "Depósito de R$ " << valor << " realizado com sucesso!" << endl;
    }
    void sacar(double valor) {
        if (valor > saldo) {
            cout << "Saldo insuficiente para saque!" << endl;
        } else {
            saldo -= valor;
            cout << "Saque de R$ " << valor << " realizado com sucesso!" << endl;
        }
    }
    void exibirSaldo() {
        cout << "Titular: " << titular << endl;
        cout << "Saldo: R$ " << saldo << endl;
    }
};

int main() {
    ContaBancaria conta1("Jennison Diniz", 1000.00);
    conta1.exibirSaldo();
    
    conta1.depositar(500.00);
    conta1.exibirSaldo();
    
    conta1.sacar(200.00);
    conta1.exibirSaldo();
    
    conta1.sacar(1500.00); // Tentativa de saque maior que o saldo
    conta1.exibirSaldo();
    
    return 0;
}
