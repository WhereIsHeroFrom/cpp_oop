#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {

    }
    void eat() {
        cout << "����Զ���" << endl;
    }
};

class Cat: public Animal {
public:
    Cat() {

    }
    void eat() {
        Animal::eat();
        cout << "è�Զ���" << endl;
    }
};


int main() {
    Cat c;
    c.eat();
    // c.Animal::eat();

    return 0;
}