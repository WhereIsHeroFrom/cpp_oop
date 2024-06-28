#include <iostream>
using namespace std;

/*
访问权限
公共权限   public         类内可以访问，类外也可以访问
保护权限   protected      类内可以访问，类外不可以访问    子类可以访问
私有权限   private        类内可以访问，类外不可以访问    子类不可以访问

B -> A

A  父类、基类       名字、房子、支付密码
B  子类、派生类     公有、保护、私有

*/


class People {
    // 公有权限
public:
    int m_Id;

    // 保护权限
protected:
    int m_HouseId;

    // 私有权限
private:
    int m_PayPass;

public:
    void work() {
        // 所有成员变量，类内均可以访问
        m_Id = 1;
        m_HouseId = 2;
        m_PayPass = 1314;
    }
private:
    void work1() {
        // 所有成员变量，类内均可以访问
        m_Id = 1;
        m_HouseId = 2;
        m_PayPass = 1314;
    }

};


class Son : public People {
    void func() {
        m_Id = 1;
        m_HouseId = 4;    // 保护成员，子类可以访问
        // m_PayPass = 123;  // 私有成员，子类无法访问
    }
};

int main() {
    // 实例化
    People p;
    p.m_Id = 1;       // 公有成员，类外可以访问
    //p.m_HouseId = 5;  // 保护成员，类外不可以访问
    //p.m_PayPass = 10; // 私有成员，类外不可以访问
    p.work();
    // p.work1();        // 私有成员函数，类外不可访问
    return 0;
}