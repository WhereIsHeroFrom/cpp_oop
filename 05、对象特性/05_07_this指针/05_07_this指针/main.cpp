#include <iostream>
using namespace std;

/*
thisָ��
1�����������ͻ
2��*this �Ϳ��Ի�ȡ�����������


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