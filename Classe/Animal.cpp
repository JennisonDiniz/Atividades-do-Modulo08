// Orientações a Objetos
// Aula 06 - 15/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
#include <string>

using namespace std;
class Animal {
private:
    string especie;
    string som;
public:
void setEspecie(string e) { especie = e; }
void setSom(string s) { som = s; }
string getEspecie() { return especie; }
string getSom() { return som; }
void emitirSom() {
    cout << "O animal " << especie << " emite o som: " << som << endl;
}
};
int main() {
    Animal a1;
    a1.setEspecie("Cachorro");
    a1.setSom("Au Au");
    
    Animal a2;
    a2.setEspecie("Gato");
    a2.setSom("Miau");

    Animal a3;
    a3.setEspecie("Vaca");
    a3.setSom("Muu");


    a1.emitirSom();
    a2.emitirSom();
    a3.emitirSom();

    return 0;
}
