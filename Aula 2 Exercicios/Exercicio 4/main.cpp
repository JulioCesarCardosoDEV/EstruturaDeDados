#include <iostream>

using namespace std;

int main(int argc, char** argv) {
   int v[10], w[10], fatorial;
   
   for (int i = 0; i < 10; i++){
   	cout << "Digite um numero: ";
   	cin >> v[i];
   	
   	fatorial = 1;			
   	
		if(v[i] >= 2){
		for(int j = 2; j <= v[i]; j++){
			fatorial = fatorial * j;
		}
		w[i] = fatorial;
		}else if(v[i] == 1 || v[i] == 0){
			w[i] = 1;
		}
   }
   
   	cout << "\nNumeros que possuem fatorial: " << endl;
   	for(int i = 0; i<10; i++){
   		cout << v[i] << " = " << w[i] << endl;
	}
	   
	cout << endl;
    system("PAUSE");
    return 0;
}
 
