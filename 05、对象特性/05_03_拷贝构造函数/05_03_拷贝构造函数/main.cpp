#include <iostream>
using namespace std;


/*
�������캯���Ķ���
����(const ����& ������) {}
 
*/
class Hero {
public:
    // Ĭ�Ϲ��캯��
    Hero() {
        m_Hp = 100;
        cout << "Hero Ĭ�Ϲ��캯��������ϣ�" << endl;
    }

    // �вι��캯��
    Hero(int hp) {
        m_Hp = hp;
        cout << "Hero �вι��캯��������ϣ�" << endl;
    }

    Hero(const Hero& h) {
        m_Hp = h.m_Hp;
        cout << "Hero �������캯��������ϣ�" << endl;
    }

    // ��������
    ~Hero() {
        cout << "Hero ��������������ϣ�" << endl;
    }

private:
    int   m_Hp;
};


/*
�������캯���ĵ���ʱ��

1�����Ѿ������Ķ�������ʼ������
2�������Ĵ���
3�������ķ���ֵ

*/

// 1�����Ѿ������Ķ�������ʼ������
void func1() {
    cout << "--------------func1--------------" << endl;
    Hero h1(20);
    Hero h2(h1);
}

void test1(Hero h) {

}

void test2(Hero* h) {

}

// 2�������Ĵ���
void func2() {
    cout << "--------------func2--------------" << endl;
    Hero h1;
    // test1(h1);
    test2(&h1);
}

// 3�������ķ���ֵ
Hero test3() {
    Hero h(40);
    return h;
}

void func3() {
    cout << "--------------func3--------------" << endl;
    Hero h = test3();
}

int main() {
    func1();
    func2();
    func3();
    return 0;
}
