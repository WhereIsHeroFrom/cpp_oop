#include <iostream>
using namespace std;

/*
this指针
1、解决命名冲突
2、*this 就可以获取到这个对象本身


this     *this
 &h      *(&h) == h

*/

class Hero {
public:
    Hero(int hp) {
        this->hp = hp;
        cout << this << endl;
        cout << (*this).hp << endl;
    }
    int hp;
};

int main() {
    Hero h(100);
    cout << h.hp << endl;
    cout << &h << endl;
    cout << (*(& h)).hp << endl;
    return 0;
}