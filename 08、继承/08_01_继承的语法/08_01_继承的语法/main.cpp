#include <iostream>
using namespace std;

/*
*       动物
*      /    \
*    猫      狗
* 
* 继承的语法
* class 子类 : 继承方式 父类 {}
* 子类 -> 派生类
* 父类 -> 基类
*/

class Animal {
public:
    void eat() {
        cout << "吃" << endl;
    }
};

class Cat : public Animal {
public:
    void sayHi() {
        cout << "喵~" << endl;
    }
};

class Dog : public Animal {
public:
    void sayHi() {
        cout << "汪汪汪~" << endl;
    }
};

int main() {
    Cat c;
    Dog d;
    c.eat();
    d.eat();

    c.sayHi();
    d.sayHi();

    return 0;
}
