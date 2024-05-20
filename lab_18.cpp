#include <iostream>
#include <locale>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    
    double getReal() const { return real; }
    double getImag() const { return imag; }

    
    Complex operator + (const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    
    bool operator == (const Complex& other) const {
        return (real == other.real && imag == other.imag);
    }

    bool operator != (const Complex& other) const {
        return !(*this == other);
    }

    
    friend ostream& operator << (ostream& out, const Complex& c) {
        out << "(" << c.real << " + " << c.imag << "i)";
        return out;
    }
};

int main() {
    
    setlocale(LC_CTYPE, "ukr");

    
    Complex a1(3.0, 4.0);
    Complex a2(1.0, 2.0);
    Complex a3;

    
    a3 = a1 + a2;

    
    cout << "a1: " << a1 << endl;
    cout << "a2: " << a2 << endl;
    cout << "a1 + a2 = " << a3 << endl;

    
    if (a1 == a2) {
        cout << "a1 дорівнює a2" << endl;
    }
    else {
        cout << "a1 не дорівнює a2" << endl;
    }

    return 0;
}

