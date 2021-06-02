// 求一元二次方程
//     利用公式x1 = (-b + sqrt(b*b-4*a*c))/(2*a)，x2 = (-b - sqrt(b*b-4*a*c))/(2*a)，求一元二次方程ax2+ bx + c =0的根，其中a不等于0。结果要求精确到小数点后5位。
// 输入:
//     输入一行，包含三个浮点数a, b, c（它们之间以一个空格分开），分别表示方程ax2 + bx + c =0的系数。
// 输出:
//     输出一行，表示方程的解。
//     若b2 = 4 * a * c,则两个实根相等，则输出形式为：x1=x2=...。
//     若b2 > 4 * a * c,则两个实根不等，则输出形式为：x1=...;x2 = ...，其中x1>x2。
//     若b2 < 4 * a * c，则有两个虚根，则输出：x1=实部+虚部i; x2=实部-虚部i，即x1的虚部系数大于等于x2的虚部系数，实部为0时不可省略。实部 = -b / (2*a), 虚部 = sqrt(4*a*c-b*b) / (2*a)
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
    double a, b, c, delta;

    cin >> a >> b >> c;

    delta = b * b - 4 * a * c;

    cout << fixed << setprecision(5);

    if (delta == 0)
    {
        cout << "x1=x2=" << -b / (2 * a) << endl;
    }
    else if (delta > 0)
    {
        cout << "x1=" << (-b + sqrt(delta)) / (2 * a) << ";x2=" << (-b - sqrt(delta)) / (2 * a) << endl;
    }
    else if (delta < 0)
    {
        double r = -b / (2 * a);
        if (abs(r) < 0.00000001)
        {
            r = 0;
        }

        cout << "x1=" << r << "+" << sqrt(-delta) / (2 * a) << "i";
        cout << ";";
        cout << "x2=" << r << "-" << sqrt(-delta) / (2 * a) << "i";
        cout << endl;
    }

    return 0;
}
