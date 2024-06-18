#include <iostream>
 
using namespace std;
 
int main(int argc, char** argv) {
	int A[3][5], soma_linha[3] = {0};
	int i;
		for(i = 0; i<3; i++){
			for(int j = 0; j<5; j++){
			cout << "Digite um numero: ";
			cin >> A[i][j];
			soma_linha[i] += A[i][j];
		}
	}
	for(int k = 0; k<i; k++){
		cout << "\nSoma dos elementos da linha " << (k + 1) << " = " << soma_linha[k];
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
