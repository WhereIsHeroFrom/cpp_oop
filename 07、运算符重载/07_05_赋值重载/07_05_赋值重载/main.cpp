#include <iostream>
using namespace std;


class Hero {
public:
    Hero() : m_Data(NULL) {}
    Hero(int data) {
        m_Data = new int;
        *m_Data = data;
    }
    // double delete
    ~Hero() {
        if (m_Data) {
            delete m_Data;
            m_Data = NULL;
        }
    }

    Hero& operator=(Hero& h) {
        // m_Data = h.m_Data;
        if (m_Data) {
            delete m_Data;
            m_Data = NULL;
        }
        m_Data = new int;
        *m_Data = *h.m_Data;
        return *this;
    }

    int* m_Data;
};

int main() {
    Hero h1(1);
    Hero h2(2);
    Hero h3(3);

    cout << h1.m_Data << endl;
    cout << h2.m_Data << endl;
    h1 = h2;  // ÄÚ´æÐ¹Â©
    cout << h1.m_Data << endl;
    cout << h2.m_Data << endl;

    h3 = (h2 = h1);
    cout << h1.m_Data << endl;
    cout << h2.m_Data << endl;
    cout << h3.m_Data << endl;

    return 0;
}