#include <iostream>
 
using namespace std;

double celsius(double F){
	return (F - 32) * 5/9;
}

double fahrenheit(double C){
	return (C * 9/5) + 32;
}


int main(int argc, char** argv) {
    int escolha = 0;
    float temperatura;
    cout << "Escolha uma temperatura para conversao (1 - Celsius / 2 - Fahrenheit): ";
    cin >> escolha;
    if(escolha == 1){
       cout << "Digite um temperatura em Celsius: ";
       cin >> temperatura;
       cout << "Temperatura em fahrenheit: " << fahrenheit(temperatura) << endl;
    }else if(escolha == 2){
       cout << "Digite um temperatura em Fahrenheit: ";
       cin >> temperatura;
       cout << "Temputra em celsius: " << celsius(temperatura) << endl;   
    }
	system("PAUSE");
	return 0;
}
 

