#include <iostream>
#include <string>
using namespace std;

/*
��ʼ���б���﷨

���캯��(����1, ����2): ��Ա����1(����1), ��Ա����2(����2) {}

*/
class Hero {
public:
    /*Hero(string name, int hp) {
        m_Name = name;
        m_Hp = hp;
    }*/
    Hero(string name, int hp, int speed) : m_Name(name), m_Hp(hp), m_Speed(speed) {
    }

    void Print() {
        cout << "Ӣ�ۣ�" << m_Name << "��Ѫ����" << m_Hp << ",�ٶ���" << m_Speed << endl;
    }

private:
    string m_Name;
    int m_Hp;
    int m_Speed;
};
int main() {
    Hero h("��ʥ", 100, 10);
    h.Print();

    return 0;
}
