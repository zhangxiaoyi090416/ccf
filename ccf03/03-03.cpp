// 分段函数【1.4编程基础之逻辑表达式与条件分支13】
//     编写程序，计算下列分段函数y=f(x)的值。结果保留到小数点后三位。
//      y=-x+2.5;           0<=x<5
//      y=2-1.5(x-3)(x-3);  5<=x<10
//      y=x/2-1.5;         10<=x<20
// 输入:
//     一个浮点数N，0 <= N < 20。
// 输出:
//     输出N对应的分段函数值：f(N)。结果保留到小数点后三位。
// 样例输入:
//     1.0
// 样例输出:
//     1.500
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n, y;

    cin >> n;
    if (0 <= n < 5)
        y = -n + 2.5;
    else if (5 <= n < 10)
        y = 2 - 1.5 * (n - 3) * (n - 3);
    else if (10 <= n < 20)
        y = n - 2 / 1.5;
    cout << fixed << setprecision(3) << y << endl;

    return 0;
}