#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int numeros[12], maior, menor, quantidadeDeNumerosPares; 
	double percentualDeNumerosPares, media;
	
	for(int i = 0; i<12; i++){
		cout << "Digite um numero: ";
		cin >> numeros[i];
		
		if(i == 0){
			maior = numeros[i];
			menor = numeros[i];
		}else if(numeros[i] > maior){
			maior = numeros[i];
		}else if(numeros[i] < menor){
			menor = numeros[i];
		}
		
		media += numeros[i];
		
		if(numeros[i] % 2 == 0){
			quantidadeDeNumerosPares++;
		}
	}
	
	percentualDeNumerosPares = (quantidadeDeNumerosPares * 100) / 12;
	
	if(maior == menor){
		cout << "O maior e o menor numero sao o mesmo = " << maior << endl;
	}else{
		cout << "\nMaior numero = " << maior << endl;
		cout << "Menor numero = " << menor << endl;
	}

	cout << "Media = " << (media / 12) << endl;
	cout << "Percentual de numeros pares = " << percentualDeNumerosPares << "%"<< endl;
	system("PAUSE");
	return 0;
}
