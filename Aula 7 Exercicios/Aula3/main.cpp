#include <iostream>
#include <iomanip>
using namespace std;

 
class Aluno {
private:
    string nome;
    int numeroDaMatricula, telefone, ddd;
 
public:
    Aluno() {}
 
    Aluno(string nome, int numeroDaMatricula, int ddd, int telefone) {
        this->nome = nome;
        this->numeroDaMatricula = numeroDaMatricula;
        this->telefone = telefone;
        this->ddd=ddd;
    }
 
    void imprimirDados(Aluno dados) {
        cout << "Alunos: \n" << nome << ", " << numeroDaMatricula << ", " << ddd << telefone << endl;
        cout << dados.nome << ", " << dados.numeroDaMatricula << ", " << dados.ddd <<dados.telefone << endl;
    }
};
 
int main() {
    string nome;
    int numeroDaMatricula, telefone, ddd;
    cout << "Digite o nome, o numero da matricula e o DD e telefone do primeiro aluno: ";
    cin >> nome >> numeroDaMatricula >> ddd >> telefone;
    Aluno obj(nome, numeroDaMatricula, ddd, telefone);
    cout << "Digite o nome, o numero da matricula e o DD e telefone do segundo aluno: ";
    cin >> nome >> numeroDaMatricula >> ddd >> telefone;
    Aluno aluno2(nome, numeroDaMatricula, ddd, telefone);
    obj.imprimirDados(aluno2);
    system("PAUSE");
    return 0;
}
