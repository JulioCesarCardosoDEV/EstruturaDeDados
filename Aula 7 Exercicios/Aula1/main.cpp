
#include <iostream>
using namespace std;
 
class Conta{
    public:
    int numero;
    double saldo, limite;
    string nome;
    Conta (int numero, double saldo, double limite, string nome){
       this->numero=numero;
       this->saldo=saldo;
       this->limite=limite;
       this->nome=nome;
    }
    bool sacar(double valor){
        if(valor <= saldo){
            saldo = saldo - valor;
            return true;
        }else{
            return false;
        }
    }
    bool depositar(double valor){
        saldo = saldo + valor;
        return true;
    }
    bool transfere(Conta destino, double valor, char escolha){
        if(escolha == 's'){
            if(valor <= limite){
            destino.sacar(valor);
            saldo = saldo - valor;
            return true; 
            }
            return false;
        }else if(escolha == 'd'){
            destino.depositar(valor);
            saldo = saldo + valor;
            return true;
        }else{
            return false;
        }
    }
    void retornaSaldo(){
       cout << saldo; 
    }
};
 
int main()
{
    int numero;
    double saldo, limite, saque, deposito, transferencia;
    string nome;
    char escolha;
    cin>>numero>>saldo>>limite>>nome;
    Conta obj(numero, saldo, limite, nome);
    cin >> saque;
    cin >> deposito;
    cin >> escolha;
    cin >> transferencia;
    cout << obj.sacar(saque) << endl;
    cout << obj.depositar(deposito) << endl;
    cout << obj.transfere(obj, transferencia, escolha) << endl;
    obj.retornaSaldo();
    cout << endl;
    system("PAUSE");
    return 0;
}
