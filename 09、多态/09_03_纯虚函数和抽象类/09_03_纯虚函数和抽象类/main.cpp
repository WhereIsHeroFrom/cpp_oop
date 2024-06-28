#include <iostream>

using namespace std;

class Animal {
public:
    virtual void eat() = 0;
};

class Cat : public Animal {
public:
    virtual void eat() {
        cout << "Ã¨ÔÚ³Ô¶«Î÷" << endl;
    }
};

int main() {
    Cat c;
    c.eat();

    return 0;
}