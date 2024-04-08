#include "ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexLibrary{
ostream& operator<<(ostream& os, const ComplexNumber& c)
{
    if (c.imag >= 0)
        os << c.real << "+" << c.imag << "i";
    else
        os << c.real << "-" << abs(c.imag) << "i";
    return os;
}

ComplexNumber operator+(const ComplexNumber& c1, const ComplexNumber& c2)
{
    double re = c1.real + c2.real;
    double im = c1.imag + c2.imag;
    ComplexNumber c(re,im);
    return c;
}

bool operator==(const ComplexNumber& c1, const ComplexNumber& c2)
{
    if (c1.real == c2.real && c1.imag == c2.imag)
        return true;
    else
        return false;
}

ComplexNumber ComplexNumber::conjugate()
{
    ComplexNumber conj(real,-imag);
    return conj;
}
}
