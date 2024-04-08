#include "ComplexNumber.hpp"

using namespace std;
using namespace ComplexLibrary;

int main()
{
    ComplexNumber c1(1,-2);
    ComplexNumber c2(1,-2);
    ComplexNumber c3(-3,4);

    cout << "c1: "<<c1 <<", c2: " << c2 << ", c3: " << c3 <<endl;

    // verifico l'operatore +
    ComplexNumber sum12 = c1 + c2;
    ComplexNumber sum13 = c1 + c3;
    cout << "Somma di c1 e c2: "<< sum12 <<endl;
    cout << "Somma di c1 e c3: "<< sum13 <<endl;

    // verifico l'operatore ==
    if (c1 == c2) {
        cout << "I due numeri complessi c1 e c2 sono uguali"<<endl;;
    }
    else {
        cout << "I due numeri complessi c1 e c2 NON sono uguali"<<endl;
    }

    if (c1 == c3) {
        cout << "I due numeri complessi c1 e c3 sono uguali"<<endl;;
    }
    else {
        cout << "I due numeri complessi c1 e c3 NON sono uguali"<<endl;
    }

    // verifico il metodo conjugate
    ComplexNumber coniugato1 = c1.conjugate();
    ComplexNumber coniugato3 = c3.conjugate();
    cout << "I coniugati dei numeri complessi c1 e c3 sono rispettivamente " << coniugato1 << " e " << coniugato3 << endl;

    return 0;
}
