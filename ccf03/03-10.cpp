// 求一元二次方程【1.4编程基础之逻辑表达式与条件分支20】
//     利用公式x1 = (-b + sqrt(b*b-4*a*c))/(2*a)，x2 = (-b - sqrt(b*b-4*a*c))/(2*a)，求一元二次方程ax2+ bx + c =0的根，其中a不等于0。结果要求精确到小数点后5位。
// 输入:
//     输入一行，包含三个浮点数a, b, c（它们之间以一个空格分开），分别表示方程ax2 + bx + c =0的系数。
// 输出:
//     输出一行，表示方程的解。
//     若两个实根相等，则输出形式为：x1=x2=...。
//     若两个实根不等，则输出形式为：x1=...;x2 = ...，其中x1若是两个虚根，则输出：x1=实部+虚部i; x2=实部-虚部i，其中x1,x2满足以下两个条件中的一个：
//     1.x1的实部大于x2的实部
//     2.x1的实部等于x2的实部且x1的虚部大于等于x2的虚部
//     所有实数部分要求精确到小数点后5位，数字、符号之间没有空格。
// 样例输入:
//     1.0 2.0 8.0
// 样例输出:
//     x1=-1.00000+2.64575i;x2=-1.00000-2.64575i
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, delta;

    cin >> a >> b >> c;

    delta = b * b - 4 * a * c;

    if (delta == 0)
    {
        cout << fixed << setprecision(5) << "x1=x2" << -b / (2 * a);
        cout << endl;
    }
    else if (delta > 0)
    {
        float sr = sqrt(delta);
        cout << fixed << setprecision(5) << "x1=" << (-b + sr) / (2 * a);
        cout << fixed << setprecision(5) << ";";
        cout << fixed << setprecision(5) << "x2=" << (-b - sr) / (2 * a);
        cout << endl;
    }
    else if (delta < 0)
    {
        float sr = sqrt(-delta);
        cout << fixed << setprecision(5) << "x1=" << -b / (2 * a) << "+" << sr / (2 * a) << "i";
        cout << fixed << setprecision(5) << ";";
        cout << fixed << setprecision(5) << "x2=" << -b / (2 * a) << "-" << sr / (2 * a) << "i";
        cout << endl;
    }

    return 0;
}