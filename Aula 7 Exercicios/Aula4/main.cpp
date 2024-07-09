#include <iostream>
#include <ctime>

using namespace std;

class EntradaDeCinema{
	public:
		int diaDoFilme, sala;
		float horario, valor;
		EntradaDeCinema(){
			
		}
		
		EntradaDeCinema(int diaDoFilme, float horario, int sala, float valor){
			this->diaDoFilme=diaDoFilme;
			this->horario=horario;
			this->sala=sala;
			this->valor=valor;
		}
		
		float CalculaDesconto(time_t data){
			int idade = 0;
			
			time_t tempo;
			time(&tempo);
			struct tm*tempoAtual = localtime(&tempo);
			idade = -(data - tempoAtual->tm_year - 1900);
			
			if(idade < 12){
				return valor = valor - valor * 0.5;
			}
		}
		
		float CalculaDesconto(time_t data, int numeroDaCarteirinha){
			int idade = 0;
			
			time_t tempo;
			time(&tempo);
			struct tm*tempoAtual = localtime(&tempo);
			idade = -(data - tempoAtual->tm_year - 1900);
			
			if(idade >= 12 && idade <=15){
				return valor = valor - valor * 0.4;
			}else if(idade >=16 && idade <= 20){
				return valor = valor - valor * 0.3;
			}else{
				return valor = valor - valor * 0.2;
			}
		}
		
		float CalculaDescontoHorario(EntradaDeCinema e){
			if(horario < 16){
				return valor = valor - valor * 0.1;
			}else{
				return valor;
			}
		}
		
		void toString(EntradaDeCinema e){
			cout << "\nDia e horario: " << diaDoFilme << " " << horario << ", sala: " << sala << "\n";
			cout << "TOTAL A PAGAR = " << CalculaDescontoHorario(e);
		}
	
};

int main(int argc, char** argv) {
	time_t tempo;
	time(&tempo);
	struct tm*tempoAtual = localtime(&tempo);
	
	time_t data;
	int dia, sala, carteirinha;
	char estudante;
	float horario, valor;
	cout << "Digite o dia e horario do filme: ";
	cin >> dia>>horario;
	cout << "Digite a sala: ";
	cin >> sala;
	cout << "Digite o valor da entrada: ";
	cin >> valor;
	cout << "Digite o ano que nasceu: ";
	cin >> data;
	cout << "Voce e estudande(s/n)? ";
	cin >> estudante;
	EntradaDeCinema obj(dia, horario, sala, valor);
	
	if(estudante == 's'){
		cout << "Digite o numero da carteirinha: ";
		cin >> carteirinha;
		
		if(-(data - tempoAtual->tm_year - 1900) < 12){
			obj.CalculaDesconto(data);
			obj.toString(obj);
		}else{
			obj.CalculaDesconto(data, carteirinha);
			obj.toString(obj);
		}
	}else{
		if(-(data - tempoAtual->tm_year - 1900) < 12){
			obj.CalculaDesconto(data);
			obj.toString(obj);
		}else{
			obj.toString(obj);
		}
	}
	
	cout << endl;
	system("PAUSE");
	return 0;
}
