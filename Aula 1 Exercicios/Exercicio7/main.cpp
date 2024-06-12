#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{   
   	int ano;
    
    cout << "Entre com um ano: ";
    cin >> ano;
    
    if(ano < 0){
    	cout << "Erro: Ano invalido" << endl;
    	system("PAUSE");
    	return 0;
	}
	
	// Verifica se o ano é divísivel por 400
	bool divisivelPor400 = (ano % 400 == 0);
	
	// Verifica se o ano é divísivel por 4 e não por 100
	bool divisivelPor4 = (ano % 4 == 0 && ano % 100 != 0);
	
	if(divisivelPor400 || divisivelPor4){
		cout << "Ano " << ano << " e bissexto" << endl;
		system("PAUSE");
		return 0;
	}
	else{
		cout << "Ano " << ano << " nao e bissexto" << endl;
		system("PAUSE");
		return 0;
	}
	
}

