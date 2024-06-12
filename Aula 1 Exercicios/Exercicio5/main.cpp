#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{   
   	int valorInteiro;
    
    cout << "Entre com um valor inteiro: ";
    cin >> valorInteiro;

    if(valorInteiro % 2 == 0){
    	cout << "O valor digitado: " << valorInteiro << " e um numero par" << endl;
    }
    else{
    	cout << "O valor digitado: " << valorInteiro << " e um numero impar" << endl;
	}
	
	system("PAUSE");
	return 0;
}

