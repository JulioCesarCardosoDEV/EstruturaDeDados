#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{   
	int valorA, valorB, valorC;
    double delta, x1, x2;
    
    cout << "Entre com o valor A de uma equacao do segundo grau: ";
    cin >> valorA;
    cout << "Entre com o valor B de uma equacao do segundo grau: ";
    cin >> valorB;
    cout << "Entre com o valor C de uma equacao do segundo grau: ";
    cin >> valorC;
    
    delta = valorB * valorB - 4 * valorA * valorC;
    
    if(delta > 0){
    	x1 = (-valorB + sqrt(delta))/(2 * valorA);
    	x2 = (-valorB - sqrt(delta))/(2 * valorA);
    	
    	cout << "Valor do x1: " << x1 << endl;
    	cout << "Valor do x2: " << x2 << endl;
	}
	else if(delta == 0){
		x1 = (-valorB)/(2 * valorA);
		cout << "Delta igual a 0, valor de x: " << x1 << endl;
	}
    else{
    	cout << "Erro: delta menor que zero." << endl;
	}
	
	system("PAUSE");
    return 0;
    
}
