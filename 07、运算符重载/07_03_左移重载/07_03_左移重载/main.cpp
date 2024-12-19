#include <iostream>
using namespace std;

/*
<<

Complex c;
cout.operator<<(c)

// 成员函数
c.operator<<(cout)
c << cout
*/
// 复数类
class Complex {
    friend Complex operator+(Complex& a, Complex& b);
    friend Complex operator-(Complex& a, Complex& b);
    friend ostream& operator<<(ostream& cout, Complex a);
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

ostream& operator<<(ostream& cout, Complex a) {
    cout << a.real << '+' << a.image << 'i';
    return cout;
}

int main() {
    Complex a(10, 20);
    Complex b(5, 8);
    // Complex c = a.operator+(b);
    Complex c = a + b;
    Complex d = a - b;
    //c.Print();
    //d.Print();
    // operator<<(cout, c)
    cout << c << endl << endl;
    return 0;
}