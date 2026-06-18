// Orientações a Objetos
// Aula 06 - 15/06/2026 
// Professor: Erika
// Aluno: Jennison Diniz

#include <iostream>
#include <string>

using namespace std;

class Aluno {
private:
    string nome;
    float nota1;
    float nota2;

public:
void setNome(string n) { nome = n; }
void setNota1(float n1) { nota1 = n1; }
void setNota2(float n2) { nota2 = n2; }

float calcularMedia() {
    return (nota1 + nota2) / 2;
}
void exibirResultado(){
    float media = calcularMedia();
    cout << "Nome do aluno: " << nome << endl;
    cout << "Nota 1: " << nota1 << endl;
    cout << "Nota 2: " << nota2 << endl;
    cout << "Media: " << media << endl;
    if (media >= 7.0) {
        cout << "Resultado: Aprovado" << endl;
    } else {
        cout << "Resultado: Reprovado" << endl;
    }
};
};
int main(){
    Aluno a1;
    a1.setNome("Jennison Diniz");
    a1.setNota1(8.5);
    a1.setNota2(6.0);


    

    Aluno a2;
    a2.setNome("Erika");
    a2.setNota1(5.0);
    a2.setNota2(4.5);

    
    a1.exibirResultado();
    a2.exibirResultado();

    return 0;
}