#include <iostream>
#include <string>
using namespace std;

/*
初始化列表的语法

构造函数(传参1, 传参2): 成员变量1(传参1), 成员变量2(传参2) {}

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
        cout << "英雄：" << m_Name << "的血量是" << m_Hp << ",速度是" << m_Speed << endl;
    }

private:
    string m_Name;
    int m_Hp;
    int m_Speed;
};
int main() {
    Hero h("剑圣", 100, 10);
    h.Print();

    return 0;
}
