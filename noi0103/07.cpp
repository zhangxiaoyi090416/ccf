// 描述
//     对于多项式f(x) = ax^3 + bx^2 + cx + d 和给定的a, b, c, d, x，计算f(x)的值。
// 输入
//     输入仅一行，包含5个实数，分别是x，及参数a、b、c、d的值，每个数都是绝对值不超过100的双精度浮点数。数与数之间以一个空格分开。
// 输出
//     输出一个实数，即f(x)的值，保留到小数点后7位。
// 样例输入
//     2.31 1.2 2 2 3
// 样例输出
//     33.0838692

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, a, b, c, d;

    cin >> x >> a >> b >> c >> d;
    cout << fixed << setprecision(7) << a * (x * x * x) + b * (x * x) + c * x + d << endl;

    return 0;
}