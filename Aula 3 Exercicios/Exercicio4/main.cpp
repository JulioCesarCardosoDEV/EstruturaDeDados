#include <iostream>
 
using namespace std;
 
int main(int argc, char** argv) {
	int mat[5][5], somA[5][5];
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			cout << "Digite um numero: ";
			cin >> mat[i][j];
			somA[i][j] = mat[i][j];
		}
	}
	cout << "\nMatriz: " << endl;
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			cout << mat[i][j] << " ";
		}
	}
	cout << "\nMatriz da soma impar das linhas e colunas: " << endl;
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			int soma = i + j;
			if(soma % 2 != 0){
			cout << somA[i][j] << " ";
			}
		}
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
