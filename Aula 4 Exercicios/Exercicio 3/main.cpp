#include <iostream>
 
using namespace std;
 
 string verificaAnoBissexto(int n);
 
int main(int argc, char** argv) {
    int ano = 0;
 
    cout << "Digite um ano: ";
    cin >> ano;
    if(ano < 0){
       cout << "Ano invalido" << endl;
    }else{
    cout << verificaAnoBissexto(ano) << endl;
	}
	system("PAUSE");
	return 0;
}
 
	string verificaAnoBissexto(int n){
    	bool divisivelPor400 = (n % 400 == 0);
		bool divisivelPor4 = (n % 4 == 0 && n % 100 != 0);
		if(divisivelPor4 || divisivelPor400){
			return "Ano bissexto";
		}else{
			return "Nao e um ano bissexto";
		}
	}
