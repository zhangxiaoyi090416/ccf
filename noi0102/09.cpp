// 描述
//     将一个整型变量的值赋给一个布尔型变量，再将这个布尔型变量的值赋给一个整型变量，得到的值是多少？
// 输入
//     一个整型范围内的整数，即初始时整型变量的值。
// 输出
//     一个整数，经过上述过程后得到的结果。
// 样例输入
//     3
// 样例输出
//     1

#include <iostream>
using namespace std;
int main()
{
    int a, c;
    bool b;

    cin >> a;
    b = a;
    c = b;
    cout << c << endl;

    return 0;
}