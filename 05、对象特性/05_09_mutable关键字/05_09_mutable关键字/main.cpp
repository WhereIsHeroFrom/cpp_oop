#include <iostream>
using namespace std;

// mutable   <-> const

class Hero {
public:
    Hero() :m_Hp(0), m_getHpCounter(0){}

    int getHp() const {
        m_getHpCounter++;
        return m_Hp;
    }

    void printCounter() const {
        cout << "Counter: " << m_getHpCounter << endl;
    }

private:
    int m_Hp;
    mutable int m_getHpCounter;
};

int main() {
    Hero h;
    h.getHp(), h.getHp(), h.getHp(), h.getHp(), h.getHp(), h.getHp();
    h.printCounter();

    return 0;
}