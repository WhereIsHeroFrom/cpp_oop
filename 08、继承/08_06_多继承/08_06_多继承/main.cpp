#include <iostream>
using namespace std;

class BaseA {
public:
    int m_A;
    int m_Base;

    BaseA() : m_A(0), m_Base(520) {}
};

class BaseB {
public:
    int m_B;
    int m_Base;

    BaseB() : m_B(0), m_Base(1314) {}
};

class BaseC {
public:
    int m_C;

    BaseC() : m_C(0) {}
};

class Son : public BaseA, public BaseB, public BaseC {

};

int main() {
    Son s;
    s.m_A = 1;
    s.m_B = 2;
    s.m_C = 3;
    // s.m_Base = 8;
    s.BaseA::m_Base = 8;
    s.BaseB::m_Base = 9;
    cout << &s.BaseA::m_Base << endl;
    cout << &s.BaseB::m_Base << endl;
    cout << sizeof(s) << endl;

    return 0;
}