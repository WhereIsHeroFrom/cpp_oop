#include <iostream>
using namespace std;

/*
����Ȩ��
����Ȩ��   public         ���ڿ��Է��ʣ�����Ҳ���Է���
����Ȩ��   protected      ���ڿ��Է��ʣ����ⲻ���Է���    ������Է���
˽��Ȩ��   private        ���ڿ��Է��ʣ����ⲻ���Է���    ���಻���Է���

B -> A

A  ���ࡢ����       ���֡����ӡ�֧������
B  ���ࡢ������     ���С�������˽��

*/


class People {
    // ����Ȩ��
public:
    int m_Id;

    // ����Ȩ��
protected:
    int m_HouseId;

    // ˽��Ȩ��
private:
    int m_PayPass;

public:
    void work() {
        // ���г�Ա���������ھ����Է���
        m_Id = 1;
        m_HouseId = 2;
        m_PayPass = 1314;
    }
private:
    void work1() {
        // ���г�Ա���������ھ����Է���
        m_Id = 1;
        m_HouseId = 2;
        m_PayPass = 1314;
    }

};


class Son : public People {
    void func() {
        m_Id = 1;
        m_HouseId = 4;    // ������Ա��������Է���
        // m_PayPass = 123;  // ˽�г�Ա�������޷�����
    }
};

int main() {
    // ʵ����
    People p;
    p.m_Id = 1;       // ���г�Ա��������Է���
    //p.m_HouseId = 5;  // ������Ա�����ⲻ���Է���
    //p.m_PayPass = 10; // ˽�г�Ա�����ⲻ���Է���
    p.work();
    // p.work1();        // ˽�г�Ա���������ⲻ�ɷ���
    return 0;
}