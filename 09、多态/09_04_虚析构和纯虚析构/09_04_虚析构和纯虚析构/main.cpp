#include <iostream>
using namespace std;

class BaseA {
public:
    BaseA() {}
    ~BaseA() {
        cout << "BaseA 销毁了" << endl;
    } 
};

class SonA : public BaseA {
public:
    SonA() : m_Value(NULL) {
        m_Value = new int(10);
    }
    ~SonA() {
        cout << "SonA 销毁了" << endl;
        delete m_Value;
    }
    int* m_Value;
};


class BaseB {
public:
    BaseB() {}
    /*virtual ~BaseB() {
        cout << "BaseB 销毁了" << endl;
    }*/
    virtual ~BaseB() = 0;
};

BaseB::~BaseB() {
    cout << "BaseB 销毁了" << endl;
}

class SonB : public BaseB {
public:
    SonB() : m_Value(NULL) {
        m_Value = new int(10);
    }
    ~SonB() {
        cout << "SonB 销毁了" << endl;
        delete m_Value;
    }
    int* m_Value;
};

int main() {
    BaseA* a = new SonA();
    delete a;

    BaseB* b = new SonB();
    delete b;

    // BaseB x; 抽象类无法进行实例化

    return 0;
}