// 描述
//     两位正整数的简单算术运算（只考虑整数运算），算术运算为：
//     +，加法运算；
//     -，减法运算；
//     *，乘法运算；
//     /，整除运算；
//     %，取余运算。
//     算术表达式的格式为（运算符前后可能有空格）：
//     运算数 运算符 运算数
//     请输出相应的结果。
// 输入
//     一行算术表达式。
// 输出
//     整型算数运算的结果（结果值不一定为2位数，可能多于2位或少于2位）。
// 样例输入
//     32+64
// 样例输出
//     96

#include <iostream>

using namespace std;

int eval(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    default:
        break;
    }
}

int main()
{
    int a, b;
    char op;

    cin >> a >> op >> b;
    cout << eval(a, b, op) << endl;

    return 0;
}