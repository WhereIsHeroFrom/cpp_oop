#include <iostream>
#include <string>
using namespace std;

/*
+ 
4 + 5 = 9

class A {
};

A a;
A b;
a + b;

*/
int main() {
    // 1、加法运算符
    int a = 520;
    int b = 1314;
    cout << a + b << endl;

    // 2、字符串拼接
    string c = "520";
    string d = "1314";
    cout << c + d << endl;

    string e = "我";
    string f = "爱你";
    cout << e + f << endl;
    return 0;
}