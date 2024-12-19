#include <iostream>
#include <string>
using namespace std;

//  成员函数作为友元
// PeopleFriend 的某个函数能够访问  People 的私有成员变量

class People;

class PeopleFriend {
public:
    PeopleFriend() {}

    void visitAll(People* p);
    void visitPub(People* p);
};


class People {
    // friend class PeopleFriend;
    friend void PeopleFriend::visitAll(People* p);
public:
    People() {
        m_House = "别墅";
        m_Car = "跑车";
    }
public:
    string     m_House;
private:
    string     m_Car;
};

void PeopleFriend::visitAll(People* p) {
    cout << "好朋友访问了你的" << p->m_House << endl;
    cout << "好朋友访问了你的" << p->m_Car << endl;

}
void PeopleFriend::visitPub(People* p) {
    cout << "好朋友访问了你的" << p->m_House << endl;
    // cout << "好朋友访问了你的" << p->m_Car << endl;
}

int main() {
    People p;
    PeopleFriend pf;
    pf.visitAll(&p);
    pf.visitPub(&p);

    return 0;
}
