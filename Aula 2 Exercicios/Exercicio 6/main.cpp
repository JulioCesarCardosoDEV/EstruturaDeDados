#include <iostream>

using namespace std;

int main() {
  	double numeros[8], aux;
  	
  	for(int i = 0; i < 8; i++){
  		cout << "Digite um numero: ";
  		cin >> numeros[i];
	}
	
	for(int i = 0; i < 8; i++){
		for(int j = 1 + i; j<8; j++){
			if(numeros[i] > numeros[j]){
				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
	
	cout << "\nNumeros digitados de maneira ordenada: " << endl;
	for(int i = 0; i<8; i++){
		cout << numeros[i] << " ";
	}
  	
  	cout << endl; 
	system("PAUSE");
    return 0;
}

