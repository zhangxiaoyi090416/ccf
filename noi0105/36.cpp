// 计算多项式的值【1.5编程基础之循环控制33】
//     假定多项式的形式为x^n+x^(n-1)+…+x^2+x+1，请计算给定单精度浮点数x和正整数n值的情况下这个多项式的值。
//     x在float范围内，n<=1000000。多项式的值精确到小数点后两位，保证最终结果在float范围内。
// 输入:
//     输入仅一行，包括x和n，用单个空格隔开。x在float范围内，n <= 1000000。
// 输出:
//     输出一个实数，即多项式的值，精确到小数点后两位。保证最终结果在float范围内。
// 样例输入:
//     2.0 4
// 样例输出:
//     31.00

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float x, y = 1.0;
    long int n;
    cin >> x >> n;
    if (x == 1)
    {
        cout << fixed << setprecision(2) << (n + 1) * x << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << (pow(x, n + 1) - 1) / (x - 1) << endl;
    }
    return 0;
}