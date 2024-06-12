#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{   
   	int idade;
    
    cout << "Entre com a idade: ";
    cin >> idade;
    
    if(idade < 0){
    	cout << "Idade invalida" << endl;
    	system("PAUSE");
    	return 0;
	}
	
	if(idade <= 11){
    	cout << "A pessoa e crianca" << endl;
    	system("PAUSE");
    	return 0;
	}
	else if (idade <= 17){
		cout << "A pessoa e adolescente" << endl;
		system("PAUSE");
		return 0;
	}   
	else if (idade <= 49){
		cout << "A pessoa e adulta" << endl;
    	system("PAUSE");
    	return 0;
	} 
	else{
		cout << "A pessoa e idosa" << endl;
		system("PAUSE");
		return 0;
	}
}

