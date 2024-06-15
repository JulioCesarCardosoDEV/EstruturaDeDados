#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int numeros[10];
	int numerosNegativos[10];
	int numero = 0;
	int i;
	
	for(i = 0; i<10; i++){
		cout << "Digite um numero: ";
		cin >> numero;
		
		if(numero < 10){
			break;
		}else{
			numeros[i] = numero;
			numerosNegativos[i] = numeros[i] * -1;
		}
	}
	
	cout << "\nNumeros digitados com sinal inverso: ";
	for(int j = 0; j < i; j++){
		cout << numerosNegativos << " ";
	}
	
	system("PAUSE");
	return 0;
}
