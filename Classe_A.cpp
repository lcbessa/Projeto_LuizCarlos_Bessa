#include <iostream>

using namespace std;
class Classe_A {
private:
    int A1;
    float A2;
public:
    Classe_A();
    void GetA1();
    void GetA2();
    int SetA1(int A1);
    int SetA2(float A2);
    void MA1();
    void MA2();
    void MA3();
};

Classe_A::Classe_A() {
    A1 = 0;
    A2 = 0;
}
void Classe_A::GetA1() {
    A1 = A1;
}
void Classe_A::GetA2() {
    A2 = A2;
}
int Classe_A::SetA1(int A1) {
    return A1;
}
int Classe_A::SetA2(float A2) {
    return A2;
}
void Classe_A::MA1() {
    cout << "MA1()" << endl;
}
void Classe_A::MA2() {
    cout << "MA2()"<< endl;
}
void Classe_A::MA3() {
    cout << "”Alteração a classe A partir do clone”"<< endl;
}

int main () {
    Classe_A A;
    A.MA1();
    A.MA2();
    A.MA3();
    return 0;
}
