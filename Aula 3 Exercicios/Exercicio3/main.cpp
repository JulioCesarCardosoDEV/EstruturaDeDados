#include <iostream>
 
using namespace std;
 
int main(int argc, char** argv) {
	int mat[2][3];
		for(int i = 0; i<2; i++){
			for(int j = 0; j<3; j++){
			cout << "Digite um numero: ";
			cin >> mat[i][j];
		}
	}
	cout << "\nTransposta da matriz: " << endl;
		for(int i = 0; i<3; i++){
			for(int j = 0; j<2; j++){
			cout << mat[j][i] << " ";
		}
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
