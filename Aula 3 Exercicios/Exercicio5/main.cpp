#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int matriz[6][6], aux, produto = 1;
	
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			cout << "Digite um numero: ";
			cin >> matriz[i][j];
		}
	}
	
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if(i > j){
				produto *= matriz[i][j];
			}
		}
	}
	
	cout << "\nProduto dos elementos abaixo da diagonal principal: " << produto << endl;
	cout << endl;
	system("PAUSE");
	return 0;
}
