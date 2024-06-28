#include <iostream>
using namespace std;

// ����Ϊ��Ԫ
// ��һ����ȥ������һ�����˽�г�Ա

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
        m_House = "����";
        m_Car = "�ܳ�";
    }
public:
    string    m_House;

private:
    string    m_Car;
};

void PeopleFriend::visit(People* p) {
    cout << "���������������" << p->m_House << endl;
    cout << "���������������" << p->m_Car << endl;
}

int main() {
    People p;
    PeopleFriend pf;
    pf.visit(&p);
    return 0;
}
