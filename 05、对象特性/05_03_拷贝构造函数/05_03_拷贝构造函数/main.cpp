#include <iostream>
using namespace std;


/*
拷贝构造函数的定义
类名(const 类型& 变量名) {}
 
*/
class Hero {
public:
    // 默认构造函数
    Hero() {
        m_Hp = 100;
        cout << "Hero 默认构造函数调用完毕！" << endl;
    }

    // 有参构造函数
    Hero(int hp) {
        m_Hp = hp;
        cout << "Hero 有参构造函数调用完毕！" << endl;
    }

    Hero(const Hero& h) {
        m_Hp = h.m_Hp;
        cout << "Hero 拷贝构造函数调用完毕！" << endl;
    }

    // 析构函数
    ~Hero() {
        cout << "Hero 析构函数调用完毕！" << endl;
    }

private:
    int   m_Hp;
};


/*
拷贝构造函数的调用时机

1、用已经创建的对象来初始化对象
2、函数的传参
3、函数的返回值

*/

// 1、用已经创建的对象来初始化对象
void func1() {
    cout << "--------------func1--------------" << endl;
    Hero h1(20);
    Hero h2(h1);
}

void test1(Hero h) {

}

void test2(Hero* h) {

}

// 2、函数的传参
void func2() {
    cout << "--------------func2--------------" << endl;
    Hero h1;
    // test1(h1);
    test2(&h1);
}

// 3、函数的返回值
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
