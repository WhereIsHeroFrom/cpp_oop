#include <iostream>
using namespace std;


/*
继承方式

class 子类名 : 继承方式 父类名 {};

公共 public
保护 protected
私有 private

3 x 3 = 9

             |    public     |     protected      |   private
  public     |    public     |     protected      |   无法访问
  protected  |   protected   |     protected      |   无法访问
  private    |    private    |      private       |   无法访问

public:   类内可以访问，类外也可以访问
protected：  类内可以访问，类外不可访问，且子类可以访问
private：    类内可以访问，类外不可访问，且子类不可访问
*/

class Animal {
public:
    int m_pub;
protected:
    int m_pro;
private:
    int m_pri;
};

class Cat : public Animal {
public:
    Cat() {
        m_pub = 1;
        m_pro = 2;
        // m_pri = 3; 父类私有成员，子类公有继承，无法访问
    }
};

class BossCat : public Cat {
public:
    BossCat() {
        m_pub = 1;   
        m_pro = 2;    // 父类Cat中不是私有
    }
};

void testCat() {
    Cat c;
    c.m_pub = 1;
    // c.m_pro = 2;   // 要么是私有，要么是保护
}

class Dog : protected Animal {
public:
    Dog() {
        m_pub = 1;
        m_pro = 2;
        // m_pri = 3; // 父类私有成员，子类保护继承，无法访问
    }
};

class PoliceDog : public Dog {
public:
    PoliceDog() {
        m_pub = 1;    // 这个变量，在父类 Dog 中一定不是私有成员
        m_pro = 2;    // 这个变量，在父类 Dog 中一定不是私有成员
    }
};

void testDog() {
    Dog d;
    // d.m_pub = 1;   // 要么是保护，要么是私有
    // d.m_pro = 2;   // 要么是保护，要么是私有
}

class Pig : private Animal {
public:
    Pig() {
        m_pub = 1;
        m_pro = 2;
        // m_pri = 3;   // 父类私有成员，子类私有继承，无法访问
    }
};

class WildPig : public Pig {
public:
    WildPig() {
        // m_pub = 1;   // 该变量在父类 Pig 中是私有的
        // m_pro = 2;   // 该变量在父类 Pig 中是私有的
    }
};

void testPig() {
    Pig p;
    // p.m_pub = 1;     // 要么是保护，要么是私有
    // p.m_pro = 2;     // 要么是保护，要么是私有
}

int main() {


    return 0;
}