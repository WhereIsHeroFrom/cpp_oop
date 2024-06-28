#include <iostream>
using namespace std;

/*
继承中，构造链里，先构造的后析构

d -> c -> b -> a

a b c d d c b a
*/

class Animal {
public:
    Animal() {
        cout << "Animal 构造" << endl;
    }
    ~Animal() {
        cout << "Animal 析构" << endl;
    }
};

class Cat: public Animal {
public:
    Cat() {
        cout << "Cat 构造" << endl;
    }
    ~Cat() {
        cout << "Cat 析构" << endl;
    }
};

class BossCat : public Cat {
public:
    BossCat() {
        cout << "BossCat 构造" << endl;
    }
    ~BossCat() {
        cout << "BossCat 析构" << endl;
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