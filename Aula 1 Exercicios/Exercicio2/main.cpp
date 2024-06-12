#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{   
    double alturaDoRetangulo, baseDoRetangulo, area;
    
    cout << "Entre com a altura de um retangulo: ";
    cin >> alturaDoRetangulo;
    cout << "Entre com a base de um retangulo: ";
    cin >> baseDoRetangulo;
    
    if(alturaDoRetangulo <= 0){
    	cout << "Valor invalido para a altura do retangulo." << endl;
    	system("PAUSE");
    	return 0;
	}
	
	else if(baseDoRetangulo <= 0){
		cout << "Valor invalido para a base do retangulo." << endl;
		system("PAUSE");
		return 0;
	}else {
		area = baseDoRetangulo * alturaDoRetangulo;
		cout << "Area do retangulo: " << area << endl;
		system("PAUSE");
		return 0;
	}
    	
}
