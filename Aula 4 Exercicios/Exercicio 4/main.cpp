#include <iostream>
 
using namespace std;
 
double soma(double n1, double n2);
double subtracao(double n1, double n2);
double divisao(double n1, double n2);
double multiplicacao(double n1, double n2);
 
int main(int argc, char** argv) {
    double numero = 0, numero2 = 0;
    char operacao;
 
    cout << "Digite um numero: ";
    cin >> numero;
    cout << "Digite um segundo numero: ";
    cin >> numero2;
    cout << "Digite um operacao para os numeros (+, -, *, /, e - end): ";
    cin >> operacao;
    switch(operacao){
    	case '+':
    		cout << "Resultado = " << soma(numero, numero2);
    		break;
    	case '-':
    		cout << "Resultado = " <<subtracao(numero, numero2);
    		break;
    	case '/':
    		cout << "Resultado = " << divisao(numero, numero2);
    		break;
    	case '*':
    		cout << "Resultado = " << multiplicacao(numero, numero2);
    		break;
    	case 'e':
    		cout << "\nOperacao finalizada" << endl;
    		break;
	}
    cout << endl;
	system("PAUSE");
	return 0;
}
 
double soma(double n1, double n2){
	return n1 + n2;
}
 
double subtracao(double n1, double n2){
	return n1 - n2;
}
 
double divisao(double n1, double n2){
	return n1 / n2;
}
 
double multiplicacao(double n1, double n2){
	return n1 * n2;
}
