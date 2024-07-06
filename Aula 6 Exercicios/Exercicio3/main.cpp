#include <iostream>
 
using namespace std;
 
class Estacionamento {
public:
    int dia;
    double horaEntrada, horaSaida;
 
    void entrada() {
        cout << "Digite o dia, a hora de entra e saida\n";
        cin >> dia >> horaEntrada >> horaSaida;
    }
 
    double calculaHora() {
    int tempo = horaSaida - horaEntrada;
    return tempo * 5;
}};
 
int main(int argc, char** argv) {
 
    Estacionamento obj;
    obj.entrada();
    cout << "Total a pagar = " << obj.calculaHora()<< endl;
    system("PAUSE");
    return 0;
}
