#include <iostream>

using namespace std;
class Classe_D {
private:
    int D1;
    int D2;
public:
    Classe_D();
    void GetD1();
    void GetD2();
    int SetD1(int D1);
    int SetD2(int D2);
    void MD1();
    void MD2();
    void MD4();
};

Classe_D::Classe_D() {
    D1 = 0;
    D2 = 0;
}
void Classe_D::GetD1() {
    D1 = D1;
}
void Classe_D::GetD2() {
    D2 = D2;
}
int Classe_D::SetD1(int D1) {
    return D1;
}
int Classe_D::SetD2(int D2) {
    return D2;
}
void Classe_D::MD1() {
    cout << "MD1()" << endl;
}
void Classe_D::MD2() {
    cout << "MD2()"<< endl;
}
void Classe_D::MD4() {
    cout << "MD4()"<< endl;    
}
int main () {
    Classe_D D;
    D.MD1();
    D.MD2();
    D.MD4();
 
    return 0;
}
