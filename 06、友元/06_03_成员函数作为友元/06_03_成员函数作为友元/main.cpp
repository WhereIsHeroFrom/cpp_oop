#include <iostream>
#include <string>
using namespace std;

//  ��Ա������Ϊ��Ԫ
// PeopleFriend ��ĳ�������ܹ�����  People ��˽�г�Ա����

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
        m_House = "����";
        m_Car = "�ܳ�";
    }
public:
    string     m_House;
private:
    string     m_Car;
};

void PeopleFriend::visitAll(People* p) {
    cout << "�����ѷ��������" << p->m_House << endl;
    cout << "�����ѷ��������" << p->m_Car << endl;

}
void PeopleFriend::visitPub(People* p) {
    cout << "�����ѷ��������" << p->m_House << endl;
    // cout << "�����ѷ��������" << p->m_Car << endl;
}

int main() {
    People p;
    PeopleFriend pf;
    pf.visitAll(&p);
    pf.visitPub(&p);

    return 0;
}
