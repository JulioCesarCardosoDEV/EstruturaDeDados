
#include <iostream>
using namespace std;

class Vetor
{
   public:
		float x;
		float y;

		Vetor()  // Construtor default nulo //
		{
			x = 0;
			y = 0;
		}
		Vetor (float a, float b)
		{
			x = a;
			y = b;
		}
		float ProdEscalar (Vetor a, Vetor b)
		{
			return  ((a.x * b.x) + (a.y * b.y) );
		}
		Vetor operator + (Vetor opdir)
		{
			Vetor Ret;
			Ret.x = this ->x + opdir.x;
			Ret.y = this ->y + opdir.y;
			return Ret;
		}
};






int main(int argc, char *argv[])
{
   

	float x1,y1,x2,y2;
	
	cout <<" Entre com o valor de x do Vetor a...:  ";
	cin >> x1;
	cout <<" Entre com o valor de y do Vetor a...:  ";
	cin >> y1;
	cout <<" Entre com o valor de x do Vetor b...:  ";
	cin >> x2;
	cout <<" Entre com o valor de y do Vetor b...:  ";
	cin >> y2;

	Vetor A(x1,y1);
	Vetor B(x2,y2);

	Vetor C = A + B;

	cout <<"Vetor Soma = (" <<C.x <<", " <<C.y <<")";
	float Pe = A.ProdEscalar(A,B);
	cout << "\nProdutoEscalar = (" << Pe <<")";
	
	
	 system("PAUSE");
    return 0;

}


