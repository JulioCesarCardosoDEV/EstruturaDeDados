#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{   
   	double alturaDoTriangulo, baseDoTriangulo, area;
    
    cout << "Entre com a altura de um triangulo: ";
    cin >> alturaDoTriangulo;
    cout << "Entre com a base de um triangulo: ";
    cin >> baseDoTriangulo;
    
    if(alturaDoTriangulo <= 0){
    	cout << "Altura do triangulo invalida" << endl;
    	system("PAUSE");
    	return 0;
	}
	else if(baseDoTriangulo <= 0){
    	cout << "Base do triangulo invalida" << endl;
    	system("PAUSE");
    	return 0;
	}else{
		area = (baseDoTriangulo * alturaDoTriangulo)/2;
    
    	cout << "Area do triangulo: " << area << endl;
    	
    	system("PAUSE");
   		return 0;
	}    
}
