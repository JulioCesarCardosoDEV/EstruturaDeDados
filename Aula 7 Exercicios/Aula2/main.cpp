#include <iostream>
using namespace std;
 
class Comparavel{
    int numero;
    public:
    Comparavel (int numero){
       this->numero=numero;
    }
    bool maiorOuIgual(int valor){
        if(valor >= numero){
            return true;
        }
        return false;
    }
    bool menorOuIgual(int valor){
        if(valor <= numero){
            return true; 
        }
        return false;
    }
    bool eDiferenteDe(int valor){
        if(numero != valor){
            return true;
        }
        return false;
    }
};
 
int main()
{
    int numero, numero2;
    cout << "Digite um numero: ";
    cin >> numero;
    Comparavel obj(numero);
    cout << "Digite outro numero: ";
    cin >> numero2;
    cout << obj.maiorOuIgual(numero2) << endl;
    cout << obj.menorOuIgual(numero2) << endl;
    cout << obj.eDiferenteDe(numero2) << endl;
    system("PAUSE");
    return 0;
}
