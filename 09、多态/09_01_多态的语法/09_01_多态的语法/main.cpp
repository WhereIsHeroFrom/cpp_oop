#include <iostream>
using namespace std;

class Animal {
public:
    // 虚函数
    virtual void eat() {
        cout << "动物在吃东西" << endl;
    }
};

class Cat : public Animal {
public:
    void eat() {
        cout << "猫在吃东西" << endl;
    }
};

class Pig : public Animal {
public:
    void eat() {
        cout << "猪在吃东西" << endl;
    }
};


// main -> test -> eat -> Animal::eat
// 函数传参是个动物，但是传入不同的动物，会产生不同的行为，这就叫多态
void eat(Animal& a) {
    a.eat();
}

void Test() {
    Cat c;
    Pig p;
    eat(c);
    eat(p);
}

int main() {
    Test();
    return 0;
}