#include <iostream>
#include <string>
using namespace std;


/*
��̬��Ա�������ص㣺
1�����еĶ�����ͬһ������
2������׶η����ڴ�
3����Ҫ�����н�����������������г�ʼ��
*/
class Hero {
public:
    Hero() {
        m_Name = "Ӣ��";
        m_Hp = 100;
    }

    ~Hero() {

    }
    // 3.1 ����
    static int m_HeroCount;
private:
    string m_Name;
    int m_Hp;

};

// 3.2 ��ʼ��
int Hero::m_HeroCount = 100;

int main() {
    Hero h;
    cout << h.m_HeroCount << endl;
    h.m_HeroCount = 101;
    cout << Hero::m_HeroCount << endl;

    cout << &(h.m_HeroCount) << endl;
    cout << &(Hero::m_HeroCount) << endl;
    return 0;
}
