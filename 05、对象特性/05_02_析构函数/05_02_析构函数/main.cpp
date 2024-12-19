#include <iostream>
using namespace std;



/*
析构函数注意点

1、函数名称和类名一致，并且在最前面加上一个 ~ 波浪号
2、函数返回值不需要写
3、不能有参数

*/
class Hero {
public:
    // 构造函数
    Hero() {
        cout << "Hero 默认构造函数调用完毕！" << endl;
    }
    // 析构函数
    ~Hero() {
        cout << "Hero 析构函数调用完毕！" << endl;
    }
};

void test() {
    Hero h;
}

int main() {
    test();
    Hero h;
    int a;
    cin >> a;
    return 0;
}