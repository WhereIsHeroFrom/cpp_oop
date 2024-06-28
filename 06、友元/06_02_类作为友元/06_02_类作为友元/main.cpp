#include <iostream>
using namespace std;

// 类作为友元
// 让一个类去访问另一个类的私有成员

class People;

class PeopleFriend {
public:
    PeopleFriend() {

    }
    void visit(People* p);
};

class People {
    friend class PeopleFriend;
public:
    People() {
        m_House = "别墅";
        m_Car = "跑车";
    }
public:
    string    m_House;

private:
    string    m_Car;
};

void PeopleFriend::visit(People* p) {
    cout << "好朋友来访问你的" << p->m_House << endl;
    cout << "好朋友来访问你的" << p->m_Car << endl;
}

int main() {
    People p;
    PeopleFriend pf;
    pf.visit(&p);
    return 0;
}
