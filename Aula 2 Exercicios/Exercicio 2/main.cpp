#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int numeros[100], numero, ultimoNumero, quantidadeDeRepeticoes, i;
	
	for(i = 0; i < 100; i++){
		cout << "Digite um numero: ";
		cin >> numero;
		
		if(numero == 0){
			break;
		}else{
			numeros[i] = numero;
			ultimoNumero = numeros[i];
		}
	}
	
	for(j = 0; j<i; j++){
		if(numeros[j] == ultimoNumero){
			quantidadeDeRepeticoes++;
		}
	}
	
	cout << "\nUltimo numero: " << ultimoNumero << " com " << quantidadeDeRepeticoes << " de repeticoes" << endl;
	
	system("PAUSE");
	return 0;
}
