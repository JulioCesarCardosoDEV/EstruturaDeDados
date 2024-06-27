#include <iostream>
 
using namespace std;
 
int fatorial(int numero);
 
int main(int argc, char** argv) {
    double numero = 0;
 
    cout << "Digite um numero para calcular o seu fatorial: ";
    cin >> numero;
	
	if(numero < 0){
		cout << "Numero invalido";
	}else if(numero == 0 || numero == 1){
		cout << "Fatorial: " << 1;
	}else{
		cout << "Fatorial: " << fatorial(numero);
	}

    cout << endl;
	system("PAUSE");
	return 0;
}
 
int fatorial(int numero){
	int resultado = 1;
	for(int i = 1; i<= numero; i++){
		resultado = resultado * i;
	}
	return resultado;
}

