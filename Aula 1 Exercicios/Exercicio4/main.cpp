#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{   
   	double baseMaiorDoTrapezio, baseMenorDoTrapezio, alturaDoTrapezio, area;
    
    cout << "Entre com a base MAIOR de um trapezio: ";
    cin >> baseMaiorDoTrapezio;
    cout << "Entre com a base MENOR de um trapezio: ";
    cin >> baseMenorDoTrapezio;
    cout << "Entre com a ALTURA de um trapezio: ";
    cin >> alturaDoTrapezio;
    
    if(baseMaiorDoTrapezio <= 0){
    	cout << "Base maior do trapezio invalida" << endl;
    	system("PAUSE");
    	return 0;
	}
	else if(baseMenorDoTrapezio <= 0){
    	cout << "Base menor do trapezio invalida" << endl;
    	system("PAUSE");
    	return 0;
	}
	else if (alturaDoTrapezio <= 0){
		cout << "Altura do trapezio invalida" << endl;
		system("PAUSE");
		return 0;
	}   
	else{
		area = ((baseMaiorDoTrapezio + baseMenorDoTrapezio) * alturaDoTrapezio)/2;
    	cout << "Area do trapezio: " << area << endl;
    	system("PAUSE");
    	return 0;
	} 
}

