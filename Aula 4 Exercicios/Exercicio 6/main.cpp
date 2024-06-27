#include <iostream>
 
using namespace std;
 
double calculaQuadrado(double n);
double somaDosQuadrados(double n1, double n2);

 
int main(int argc, char** argv) {
    double numero = 0, numero2 = 0;
 
    cout << "Digite um numero: ";
    cin >> numero;
    cout << "Digite um segundo numero: ";
    cin >> numero2;
  	
    cout << "Soma do quadrado dos numeros: " << somaDosQuadrados(numero, numero2);
    
    
    cout << endl;
	system("PAUSE");
	return 0;
}
 
double calculaQuadrado(double n){
	n = n * n;
	return n;
}
 
double somaDosQuadrados(double n1, double n2){
	return calculaQuadrado(n1) + calculaQuadrado(n2);
}
