#include <iostream>
using namespace std;

/*
*       ����
*      /    \
*    è      ��
* 
* �̳е��﷨
* class ���� : �̳з�ʽ ���� {}
* ���� -> ������
* ���� -> ����
*/

class Animal {
public:
    void eat() {
        cout << "��" << endl;
    }
};

class Cat : public Animal {
public:
    void sayHi() {
        cout << "��~" << endl;
    }
};

class Dog : public Animal {
public:
    void sayHi() {
        cout << "������~" << endl;
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
