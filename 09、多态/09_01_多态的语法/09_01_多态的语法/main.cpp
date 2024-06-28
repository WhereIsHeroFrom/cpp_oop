#include <iostream>
using namespace std;

class Animal {
public:
    // �麯��
    virtual void eat() {
        cout << "�����ڳԶ���" << endl;
    }
};

class Cat : public Animal {
public:
    void eat() {
        cout << "è�ڳԶ���" << endl;
    }
};

class Pig : public Animal {
public:
    void eat() {
        cout << "���ڳԶ���" << endl;
    }
};


// main -> test -> eat -> Animal::eat
// ���������Ǹ�������Ǵ��벻ͬ�Ķ���������ͬ����Ϊ����ͽж�̬
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