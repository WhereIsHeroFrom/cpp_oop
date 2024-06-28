#include <iostream>
#include <string>
using namespace std;

// �ӿڡ����������� ��ͬһ������
// 1�����Կ��ƶ�дȨ��
// 2�����Լ�����ݵ���Ч��

class Hero {
public:
    void SetName(string name) {
        m_Name = name;
    }
    string GetName() {
        return m_Name;
    }

    int GetSkillCount() {
        return m_SkillCount;
    }

    void SetSpeed(int speed) {
        if (speed < 100 || speed > 500) {
            cout << "�ٶ����ò��Ϸ�" << endl;
            return;
        }
        m_Speed = speed;
    }

private:
    string   m_Name;            // �ɶ�����д
    int      m_SkillCount = 4;  // ֻ��
    int      m_Speed;           // ֻд
};

int main() {
    Hero h;
    /*
        h.m_Name = "123";
        h.m_SkillCount = 4;
        h.m_Speed = 10;
    */
    h.SetName("��ʥ");
    cout << "Ӣ�۵����ֽУ�" << h.GetName() << endl;
    cout << "Ӣ�۵ļ������ǣ�" << h.GetSkillCount() << endl;
    h.SetSpeed(666);


    return 0;
}