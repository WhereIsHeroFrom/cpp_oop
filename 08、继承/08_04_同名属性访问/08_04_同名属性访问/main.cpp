#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        m_Data = 17891;
    }
    int m_Data;
};

class Cat : public Animal {
public:
    Cat() {
        m_Data = 29812;
    }
    int m_Data;
};

void Test() {
    Cat c;
    cout << c.m_Data << endl;
    cout << c.Animal::m_Data << endl;

    cout << &(c.m_Data) << endl;
    cout << &(c.Animal::m_Data) << endl;
}

int main() {

    Test();
    return 0;
}