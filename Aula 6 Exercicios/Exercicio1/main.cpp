#include <iostream>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class matematica{
	public:
		int a,b;
	void entrada(){
		cout<<"Digite dois valores:\n";
		cin>>a>>b;
	}
	int soma(){
		return a + b;
	}
	int mult(){
		return a * b;
	}
	int sub(){
		return a - b;
	}
	int div(){
        if(b == 0){
        return 0;
        }  
		return a / b;
	}
 
};
int main(int argc, char** argv) {
	matematica obj;
	obj.entrada();
	cout<<"Resposta = " << obj.div()<<endl;
	system("PAUSE");
	return 0;
}
