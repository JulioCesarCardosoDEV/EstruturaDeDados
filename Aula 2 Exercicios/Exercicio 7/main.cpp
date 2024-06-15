#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	double vetor1 [7], vetor2 [7], vetorFinal[7];
	char operacoes[7];
	
	for(int i = 0; i<7; i++){
		cout << "Digite um numero: ";
		cin >> vetor1[i];
		cout << "Digite um segundo numero: ";
		cin >> vetor2[i];
		cout << "Digite a operacao (+, -, /, *): ";
		cin >> operacoes[i];
		
		switch(operacoes[i]){
			case '+':
				vetorFinal[i] = vetor1[i] + vetor2[i];
				break;
			case '-':
				vetorFinal[i] = vetor1[i] - vetor2[i];
				break;
			case '*':
				vetorFinal[i] = vetor1[i] * vetor2[i];
				break;
			case '/':
				vetorFinal[i] = vetor1[i] / vetor2[i];
		}
	}
	
	cout << endl;
	for(int i = 0; i<7; i++){
		cout << (i + 1) << " operacao: " << vetorFinal[i] << endl;
	}
	
	cout << endl;
	system("PAUSE");
	return 0;
}
