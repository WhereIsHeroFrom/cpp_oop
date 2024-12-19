#include <iostream>
#include <string>
using namespace std;

/*
友元的目的

让一个类 或者 函数
能够访问另一个类的私有成员

友元的关键字： friend

三种友元
1、全局函数作为友元
2、类作为友元
3、成员函数作为友元
*/

class People{
    friend void friendVisit(People* p);
public:
    People() {
        m_House = "别墅";
        m_Car = "跑车";
    }
public:
    string    m_House;

private:
    string   m_Car;
};

void friendVisit(People* p) {
    cout << "好朋友来访问你的" << p->m_House << endl;
    cout << "好朋友来访问你的" << p->m_Car << endl;
}

int main() {
    People p;
    friendVisit(&p);
    return 0;
}