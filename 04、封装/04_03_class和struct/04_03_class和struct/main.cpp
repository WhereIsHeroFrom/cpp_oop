#include <iostream>
using namespace std;

/*
struct && class


struct Ĭ���ǹ�����
class  Ĭ����˽�е�
*/

class C {
    int m_a;
};

struct S {
    int m_a;

    void func() {
        m_a = 666;
    }
};

int main() {
    C c;
    S s;
    // c.m_a;      // ˽�е�
    s.m_a = 4;  // ���е�
    s.func();
    cout << s.m_a << endl;

    return 0;
}