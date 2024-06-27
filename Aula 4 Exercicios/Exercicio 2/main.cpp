#include <iostream>
 
using namespace std;
 
int calculaNumeroPrimo(int n);
 
int main(int argc, char** argv) {
    int numero = 0;
 
    cout << "Digite um numero inteiro e positivo: ";
    cin >> numero;
    if(numero >= 0){
       cout << "Resultado: " << calculaNumeroPrimo(numero);
    }else if(numero < 0){
       cout << "Valor inválido";
    }
    cout << endl;
	system("PAUSE");
	return 0;
}
 
int calculaNumeroPrimo(int n){
    int contador = 0;
    for(int i = 1; i<=n; i++){
    	if(n % i == 0){
    	contador = contador + 1;
   		}
    }       
    if(contador == 2){
    	return 1;
	}else{
		return 0;
	}
	}
