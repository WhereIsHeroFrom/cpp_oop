#include <iostream>
using namespace std;


/*
�̳з�ʽ

class ������ : �̳з�ʽ ������ {};

���� public
���� protected
˽�� private

3 x 3 = 9

             |    public     |     protected      |   private
  public     |    public     |     protected      |   �޷�����
  protected  |   protected   |     protected      |   �޷�����
  private    |    private    |      private       |   �޷�����

public:   ���ڿ��Է��ʣ�����Ҳ���Է���
protected��  ���ڿ��Է��ʣ����ⲻ�ɷ��ʣ���������Է���
private��    ���ڿ��Է��ʣ����ⲻ�ɷ��ʣ������಻�ɷ���
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
        // m_pri = 3; ����˽�г�Ա�����๫�м̳У��޷�����
    }
};

class BossCat : public Cat {
public:
    BossCat() {
        m_pub = 1;   
        m_pro = 2;    // ����Cat�в���˽��
    }
};

void testCat() {
    Cat c;
    c.m_pub = 1;
    // c.m_pro = 2;   // Ҫô��˽�У�Ҫô�Ǳ���
}

class Dog : protected Animal {
public:
    Dog() {
        m_pub = 1;
        m_pro = 2;
        // m_pri = 3; // ����˽�г�Ա�����ౣ���̳У��޷�����
    }
};

class PoliceDog : public Dog {
public:
    PoliceDog() {
        m_pub = 1;    // ����������ڸ��� Dog ��һ������˽�г�Ա
        m_pro = 2;    // ����������ڸ��� Dog ��һ������˽�г�Ա
    }
};

void testDog() {
    Dog d;
    // d.m_pub = 1;   // Ҫô�Ǳ�����Ҫô��˽��
    // d.m_pro = 2;   // Ҫô�Ǳ�����Ҫô��˽��
}

class Pig : private Animal {
public:
    Pig() {
        m_pub = 1;
        m_pro = 2;
        // m_pri = 3;   // ����˽�г�Ա������˽�м̳У��޷�����
    }
};

class WildPig : public Pig {
public:
    WildPig() {
        // m_pub = 1;   // �ñ����ڸ��� Pig ����˽�е�
        // m_pro = 2;   // �ñ����ڸ��� Pig ����˽�е�
    }
};

void testPig() {
    Pig p;
    // p.m_pub = 1;     // Ҫô�Ǳ�����Ҫô��˽��
    // p.m_pro = 2;     // Ҫô�Ǳ�����Ҫô��˽��
}

int main() {


    return 0;
}