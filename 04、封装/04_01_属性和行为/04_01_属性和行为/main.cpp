#include <iostream>
using namespace std;

// ��������������ԣ���װ���̳С���̬

/*
��װ���﷨��

class ���� {
����Ȩ��:
    ���ԣ���Ա������
    ��Ϊ����Ա������
};
*/

class Hero {
    // ����Ȩ��  public private protected
public:
    // ����
    int   m_Id;   // m -> member
    int   m_Hp;   

    // ��Ϊ
    void addHp(int hp) {
        m_Hp += hp;
    }

    void subHp(int hp) {
        m_Hp -= hp;
    }
};

int main() {
    // ͨ���������ɶ���Ĺ��̣���  ʵ����
    Hero h;
    // ���ʶ��������
    h.m_Id = 5;
    h.m_Hp = 100;
    h.addHp(100);
    cout << "Id Ϊ" << h.m_Id << "��Ӣ�ۣ�Ѫ����" << h.m_Hp << endl;
    h.subHp(100);
    cout << "Id Ϊ" << h.m_Id << "��Ӣ�ۣ�Ѫ����" << h.m_Hp << endl;

    return 0;
}