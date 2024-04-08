#include <iostream>
#include <cmath>

using namespace std;
namespace ComplexLibrary{

struct ComplexNumber
{
    double real;
    double imag;

    ComplexNumber(double a, double b)
    {
        real = a;
        imag = b;
    }

    ComplexNumber conjugate();
};

ostream& operator<<(ostream& os, const ComplexNumber& c);
ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2);
bool operator==(const ComplexNumber& c1, const ComplexNumber& c2);
}
