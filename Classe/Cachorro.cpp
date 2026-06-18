// Orientações a Objetos
// Aula 06 - 15/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
#include <string>

using namespace std;

class Cachorro {
private:
    string nome;
    string raca;

public:
void setNome(string n) { nome = n; }
void setRaca(string r) { raca = r; }

string getNome() { return nome; }
string getRaca() { return raca; }

void latir(){
    cout << "Au Au!" << endl;
}
};
int main(){
    Cachorro c1;
    c1.setNome("Rex");
    c1.setRaca("Labrador");

    cout << "Nome do cachorro: " << c1.getNome() << endl;
    cout << "Raca do cachorro: " << c1.getRaca() << endl;
    c1.latir();

    return 0;
}
