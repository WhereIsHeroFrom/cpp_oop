#include <iostream>
using namespace std;

/*
+
*/
// ¸´ÊıÀà
class Complex {
    friend Complex operator+(Complex& a, Complex& b);
    friend Complex operator-(Complex& a, Complex& b);
public:
    Complex() : real(0), image(0) {

    }
    Complex(int real, int image) {
        this->real = real;
        this->image = image;
    }
    /*
    Complex operator+(Complex& other) {
        Complex ret;
        ret.real = this->real + other.real;
        ret.image = this->image + other.image;
        return ret;
    }*/

    // a + bi
    void Print() {
        cout << real << '+' << image << 'i' << endl;
    }

private:
    int   real;
    int   image;
};

Complex operator+(Complex& a, Complex& b) {
    Complex ret;
    ret.real = a.real + b.real;
    ret.image = a.image + b.image;
    return ret;
}

Complex operator-(Complex& a, Complex& b) {
    Complex ret;
    ret.real = a.real - b.real;
    ret.image = a.image - b.image;
    return ret;
}

int main() {
    Complex a(10, 20);
    Complex b(5, 8);
    // Complex c = a.operator+(b);
    Complex c = a + b;
    Complex d = a - b;
    c.Print();
    d.Print();
    return 0;
}