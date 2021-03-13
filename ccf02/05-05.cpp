// 计算分数的浮点数值
//     两个整数a和b分别作为分子和分母，既分数a/b，求它的浮点数值（双精度浮点数，保留小数点后9位）
// 输入:
//     输入仅一行，包括两个整数a和b。
// 输出:
//     输出也仅一行，分数 a/b 的浮点数值（双精度浮点数，保留小数点后9位）。
// 样例输入:
//     5 7
// 样例输出:
//     0.714285714

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(9) << a / b << endl;
    return 0;
}