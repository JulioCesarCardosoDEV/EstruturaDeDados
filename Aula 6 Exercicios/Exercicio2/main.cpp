#include <iostream>
 
using namespace std;
 
class triangulo {
public:
    double a, b, c;
 
    void entrada() {
        cout << "Digite os tres lados de um triangulo\n";
        cin >> a >> b >> c;
    }
 
    bool verificaTriangulo() {
        if (a + b > c && a + c > b && b + c > a) {
            return true;
        }
        return false;
    }
 
    string tipoDeTriangulo() {
        if (verificaTriangulo()) {
            if (a == b && b == c) {
                return "Equilatero";
            }
            else if (a != b && b != c && a != c) {
                return "Escaleno";
            }
            else {
                return "Isosceles";
            }
        }
        return "Nao e um triangulo";
    }
};
 
int main(int argc, char** argv) {
 
    triangulo obj;
    obj.entrada();
    cout << obj.tipoDeTriangulo() << endl;
    system("PAUSE");
    return 0;
}
