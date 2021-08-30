#include <iostream>

using namespace std;
class Classe_C {
private:
    string C1;
    int C2;
public:
    Classe_C();
    void GetC1();
    void GetC2();
    string SetC1(string C1);
    int SetC2(float C2);
    void MC1();
    void MC2();
};

Classe_C::Classe_C() {
    C1 = "";
    C2 = 0;
}
void Classe_C::GetC1() {
    C1 = C1;
}
void Classe_C::GetC2() {
    C2 = C2;
}
string Classe_C::SetC1(string C1) {
    return C1;
}
int Classe_C::SetC2(float C2) {
    return C2;
}
void Classe_C::MC1() {
    cout << "MC1()" << endl;
}
void Classe_C::MC2() {
    cout << "MC2()"<< endl;
}

int main () {
    Classe_C C;
    C.MC1();
    C.MC2();
    return 0;
}
