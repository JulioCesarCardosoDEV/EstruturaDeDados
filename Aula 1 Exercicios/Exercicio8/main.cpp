#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int angulo1, angulo2, angulo3;
	
	cout << "Digite o primeiro angulo de um triangulo: ";
	cin >> angulo1;
	cout << "Digite o segundo angulo de um triangulo: ";
	cin >> angulo2;
	cout << "Digite o terceiro angulo de um triangulo: ";
	cin >> angulo3;
	
	if(angulo1 <= 0 || angulo2 <= 0 || angulo3 <= 0){
		cout << "Angulo invalido" << endl;
		system("PAUSE");
		return 0;
	}
	
	if((angulo1 + angulo2 + angulo3) != 180){
		cout << "A soma dos angulos internos de um triangulo deve ser = 180" << endl;
		system("PAUSE");
		return 0;
	}
	
	if(angulo1 == angulo2 && angulo2 == angulo3){
		cout << "Este e um triangulo equilatero" << endl;
		system("PAUSE");
		return 0;
	}
	else if(angulo1 == angulo2 || angulo1 == angulo3 || angulo2 == angulo3){
		cout << "Este e um triangulo isoceles" << endl;
		system("PAUSE");
		return 0;
	}
	else{
		cout << "Este e um triangulo escaleno" << endl;
		system("PAUSE");
		return 0;
	}
	
}
