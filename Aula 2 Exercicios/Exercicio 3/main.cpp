#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	char palavra[10];
	int tamanho;
	
	cout << "Digite o tamanho da palavra: ";
	cin >> tamanho;
	cout << "Digite a palavra: " << endl;
	
	for(int i = 0; i<tamanho; i++){
		cin >> palavra[i];
	}
	
	for(int i = tamanho - 1; i>=0; i--){
		cout << palavra[i];
	}
	
	cout << endl;
	system("PAUSE");
	return 0;
	
}
