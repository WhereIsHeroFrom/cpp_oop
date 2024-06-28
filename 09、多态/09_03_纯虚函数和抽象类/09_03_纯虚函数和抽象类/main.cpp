#include <iostream>

using namespace std;

class Animal {
public:
    virtual void eat() = 0;
};

class Cat : public Animal {
public:
    virtual void eat() {
        cout << "è�ڳԶ���" << endl;
    }
};

int main() {
    Cat c;
    c.eat();

    return 0;
}