#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() {
        cout << "动物在吃东西" << endl;
    }
    virtual void run() {
        cout << "动物在跑" << endl;
    }
};

class Cat: public Animal {
public:
    void eat() {
        cout << "猫在吃东西" << endl;
    }
};

void eat(Animal& a) {
    Animal b;
    a.eat();
}

void Test() {
    Cat c;
    eat(c);
    cout << "Animal's size = " << sizeof(Animal) << endl;
}


int main() {
    Test();
    return 0;
}