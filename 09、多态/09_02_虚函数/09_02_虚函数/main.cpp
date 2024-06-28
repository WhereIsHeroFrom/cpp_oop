#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() {
        cout << "�����ڳԶ���" << endl;
    }
    virtual void run() {
        cout << "��������" << endl;
    }
};

class Cat: public Animal {
public:
    void eat() {
        cout << "è�ڳԶ���" << endl;
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