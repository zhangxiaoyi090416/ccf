// 分段函数
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
    float x, y;

    cin >> x;
    if (0 <= x && x < 5)
        y = -x + 2.5;
    else if (5 <= x && x < 10)
        y = 2 - 1.5 * (x - 3) * (x - 3);
    else if (10 <= x && x < 20)
        y = x / 2 - 1.5;
    cout << fixed << setprecision(3) << y << endl;

    return 0;
}