#include <iostream>
#include <string>
using namespace std;


/*
���캯����Ҫע��ĵ�

1���������ƺ���������һ��
2������ֵ���� ����Ҫд
3�����캯�������в���
*/
class Hero {
public:
    // Ĭ�Ϲ��캯��
    Hero() {
        m_Name = "";
        m_SkillCount = 4;
        m_Speed = 100;
        cout << "Ĭ�Ϲ��캯����Hero ������ϣ�" << endl;
    }
    // �вι��캯��1
    Hero(string name) {
        m_Name = name;
        m_SkillCount = 4;
        m_Speed = 100;
        cout << "�вι��캯��1��Hero ������ϣ�" << endl;
    }
    // �вι��캯��2
    Hero(string name, int skillCount) {
        m_Name = name;
        m_SkillCount = skillCount;
        m_Speed = 100;
        cout << "�вι��캯��2��Hero ������ϣ�" << endl;
    }

private:
    string   m_Name;
    int      m_SkillCount;
    int      m_Speed;
};

int main() {
    Hero h1;
    Hero h2("��ʥ");
    Hero h3();   // ��������    int main();   ��   int work();
    Hero h4{};
    Hero h5 = Hero("��ʥ");
    Hero h6{ "����", 4 };

    return 0;
}