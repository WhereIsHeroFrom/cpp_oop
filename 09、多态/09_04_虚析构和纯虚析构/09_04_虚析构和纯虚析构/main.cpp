#include <iostream>
using namespace std;

class BaseA {
public:
    BaseA() {}
    ~BaseA() {
        cout << "BaseA ������" << endl;
    } 
};

class SonA : public BaseA {
public:
    SonA() : m_Value(NULL) {
        m_Value = new int(10);
    }
    ~SonA() {
        cout << "SonA ������" << endl;
        delete m_Value;
    }
    int* m_Value;
};


class BaseB {
public:
    BaseB() {}
    /*virtual ~BaseB() {
        cout << "BaseB ������" << endl;
    }*/
    virtual ~BaseB() = 0;
};

BaseB::~BaseB() {
    cout << "BaseB ������" << endl;
}

class SonB : public BaseB {
public:
    SonB() : m_Value(NULL) {
        m_Value = new int(10);
    }
    ~SonB() {
        cout << "SonB ������" << endl;
        delete m_Value;
    }
    int* m_Value;
};

int main() {
    BaseA* a = new SonA();
    delete a;

    BaseB* b = new SonB();
    delete b;

    // BaseB x; �������޷�����ʵ����

    return 0;
}