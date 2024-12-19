#include <iostream>
using namespace std;

class Point {
public:
    Point(int x, int y) : m_x(x), m_y(y) {
    }

    bool operator==(const Point& other) const {
        return m_x == other.m_x && m_y == other.m_y;
    }

    bool operator<(const Point& other) const {
        int d = m_x * m_x + m_y * m_y;
        int otherd = other.m_x * other.m_x + other.m_y * other.m_y;
        return d < otherd;
    }
    bool operator>(const Point& other) const {
        if (*this == other) {
            return false;
        }
        if (*this < other) {
            return false;
        }
        return true;
    }
private:
    int m_x, m_y;
};

int main() {
    Point a(1, 6);
    Point b(2, 5);

    if (a == b) {
        cout << "a 和 b 相等" << endl;
    }
    else if (a < b) {
        cout << "a 比 b 更加接近原点" << endl;
    }
    else if(a > b) {
        cout << "b 比 a 更加接近原点" << endl;
    }

    return 0;
}