#include <iostream>
#include <string>
using namespace std;


/*
构造函数需要注意的点

1、函数名称和类名保持一致
2、返回值类型 不需要写
3、构造函数可以有参数
*/
class Hero {
public:
    // 默认构造函数
    Hero() {
        m_Name = "";
        m_SkillCount = 4;
        m_Speed = 100;
        cout << "默认构造函数：Hero 构造完毕！" << endl;
    }
    // 有参构造函数1
    Hero(string name) {
        m_Name = name;
        m_SkillCount = 4;
        m_Speed = 100;
        cout << "有参构造函数1：Hero 构造完毕！" << endl;
    }
    // 有参构造函数2
    Hero(string name, int skillCount) {
        m_Name = name;
        m_SkillCount = skillCount;
        m_Speed = 100;
        cout << "有参构造函数2：Hero 构造完毕！" << endl;
    }

private:
    string   m_Name;
    int      m_SkillCount;
    int      m_Speed;
};

int main() {
    Hero h1;
    Hero h2("剑圣");
    Hero h3();   // 函数声明    int main();   、   int work();
    Hero h4{};
    Hero h5 = Hero("剑圣");
    Hero h6{ "猴子", 4 };

    return 0;
}