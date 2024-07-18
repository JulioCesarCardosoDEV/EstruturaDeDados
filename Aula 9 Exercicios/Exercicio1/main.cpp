#include <iostream>
 
using namespace std;
 
int main()
{
    int a, b, soma, *pont1, *pont2;
    cout << "Entre com o valor a e b: ";
    cin >> a >> b;
    pont1 = &a;
    pont2 = &b;
    cout << &a << " " << &b << " " << pont1 << " " << pont2 << " \n";
    soma = a + b;
    cout << a << "\n";
    *pont1 = soma;
    cout << pont1 << "\n";
    cout << a << endl;
    system("PAUSE");
    return 0;
}
