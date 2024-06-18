#include <iostream>
 
using namespace std;
 
int main(int argc, char** argv) {
	double matriz[4][4], soma = 0;
	
	double void soma(){
		double a = 1 + 2;
	}
	
	for(int i = 0; i<4; i++){
		for(int j = 0; j<4; j++){
			cout << "Digite um numero: ";
			cin >> matriz[i][j];
		}
	}
	for(int i = 0; i<4; i++){	
		soma += matriz[i][i];
	}
	cout << "\nSoma da diagonal principal: " << soma << endl;
	cout << soma << endl;
	system("PAUSE");
	return 0;
}
