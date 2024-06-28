#include <iostream>
using namespace std;

/*
struct && class


struct 默认是公共的
class  默认是私有的
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
    // c.m_a;      // 私有的
    s.m_a = 4;  // 公有的
    s.func();
    cout << s.m_a << endl;

    return 0;
}