#include <iostream>
#include <string>
using namespace std;


/*
静态成员变量的特点：
1、所有的对象共享同一份数据
2、编译阶段分配内存
3、需要在类中进行声明，在类外进行初始化
*/
class Hero {
public:
    Hero() {
        m_Name = "英雄";
        m_Hp = 100;
    }

    ~Hero() {

    }
    // 3.1 声明
    static int m_HeroCount;
private:
    string m_Name;
    int m_Hp;

};

// 3.2 初始化
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
