#include <iostream>
using namespace std;



/*
��������ע���

1���������ƺ�����һ�£���������ǰ�����һ�� ~ ���˺�
2����������ֵ����Ҫд
3�������в���

*/
class Hero {
public:
    // ���캯��
    Hero() {
        cout << "Hero Ĭ�Ϲ��캯��������ϣ�" << endl;
    }
    // ��������
    ~Hero() {
        cout << "Hero ��������������ϣ�" << endl;
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