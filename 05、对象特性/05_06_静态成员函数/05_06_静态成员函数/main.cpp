#include <iostream>
#include <string>
using namespace std;


/*
��̬��Ա����
1�����ж�������
2����̬��Ա����ֻ��ʹ�þ�̬��Ա�������޷�ʹ����ͨ��Ա����
*/

class Hero {
public:
    Hero() {
        m_Name = "Ӣ��";
        m_Hp = 100;
    }
    ~Hero() {

    }

    static int m_HeroCount;

    static int GetHeroCount() {
        // m_Hp += 1;
        return m_HeroCount;
    }
private:
    string   m_Name;
    int      m_Hp;


    static int GetHeroCount1() {
        // m_Hp += 1;
        return m_HeroCount;
    }
};

int Hero::m_HeroCount = 100;

int main() {
    Hero h;
    cout << h.GetHeroCount() << endl;
    cout << Hero::GetHeroCount() << endl;
    // h.GetHeroCount1();
    return 0;
}