#include <iostream>
using namespace std;

/*
�̳��У���������ȹ���ĺ�����

d -> c -> b -> a

a b c d d c b a
*/

class Animal {
public:
    Animal() {
        cout << "Animal ����" << endl;
    }
    ~Animal() {
        cout << "Animal ����" << endl;
    }
};

class Cat: public Animal {
public:
    Cat() {
        cout << "Cat ����" << endl;
    }
    ~Cat() {
        cout << "Cat ����" << endl;
    }
};

class BossCat : public Cat {
public:
    BossCat() {
        cout << "BossCat ����" << endl;
    }
    ~BossCat() {
        cout << "BossCat ����" << endl;
    }
};

void Test() {
    // Animal a;
    // Cat c;
    BossCat b;
}


int main() {
    Test();
    return 0;
}