#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {

    }
    void eat() {
        cout << "动物吃东西" << endl;
    }
};

class Cat: public Animal {
public:
    Cat() {

    }
    void eat() {
        Animal::eat();
        cout << "猫吃东西" << endl;
    }
};


int main() {
    Cat c;
    c.eat();
    // c.Animal::eat();

    return 0;
}