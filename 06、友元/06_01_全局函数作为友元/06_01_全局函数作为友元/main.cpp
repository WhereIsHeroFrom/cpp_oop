#include <iostream>
#include <string>
using namespace std;

/*
��Ԫ��Ŀ��

��һ���� ���� ����
�ܹ�������һ�����˽�г�Ա

��Ԫ�Ĺؼ��֣� friend

������Ԫ
1��ȫ�ֺ�����Ϊ��Ԫ
2������Ϊ��Ԫ
3����Ա������Ϊ��Ԫ
*/

class People{
    friend void friendVisit(People* p);
public:
    People() {
        m_House = "����";
        m_Car = "�ܳ�";
    }
public:
    string    m_House;

private:
    string   m_Car;
};

void friendVisit(People* p) {
    cout << "���������������" << p->m_House << endl;
    cout << "���������������" << p->m_Car << endl;
}

int main() {
    People p;
    friendVisit(&p);
    return 0;
}