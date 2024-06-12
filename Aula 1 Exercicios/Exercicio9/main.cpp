#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	double numero1, numero2, numero3, numero4, maior, menor, media;
	
	cout << "Digite um numero: ";
	cin >> numero1;
	cout << "Digite um segundo numero: ";
	cin >> numero2;
	cout << "Digite um terceiro numero: ";
	cin >> numero3;
	cout << "Digite um quarto numero: ";
	cin >> numero4;
	
	maior = numero1; 
	menor = numero1;
	
	if(numero2 > maior){
		maior = numero2;
	}
	else if(numero2 < menor){
		menor = numero2;
	}
	
	if(numero3 > maior){
		maior = numero3;
	}
	else if(numero3 < menor){
		menor = numero3;
	}
	
	if(numero4 > maior){
		maior = numero4;
	}
	else if(numero4 < menor){
		menor = numero4;
	}
	
	media = (numero1 + numero2 + numero3 + numero4)/4;
	
	cout << "Maior numero: " << maior << endl;
	cout << "Menor numero: " << menor << endl;
	cout << "Media dos numeros: " << media << endl;
	
	system("PAUSE");
	return 0;
}
