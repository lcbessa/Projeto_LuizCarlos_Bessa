#include <iostream>

using namespace std;
class Classe_B {
private:
    int B1;
    float B2;
public:
    Classe_B();
    void GetB1();
    void GetB2();
    int SetB1(int B1);
    int SetB2(float B2);
    void MB1();
    void MB2();
};

Classe_B::Classe_B() {
    B1 = 0;
    B2 = 0;
}
void Classe_B::GetB1() {
    B1 = B1;
}
void Classe_B::GetB2() {
    B2 = B2;
}
int Classe_B::SetB1(int B1) {
    return B1;
}
int Classe_B::SetB2(float B2) {
    return B2;
}
void Classe_B::MB1() {
    cout << "MB1()" << endl;
}
void Classe_B::MB2() {
    cout << "MB2()"<< endl;
}

int main () {
    Classe_B B;
    B.MB1();
    B.MB2();
    return 0;
}
