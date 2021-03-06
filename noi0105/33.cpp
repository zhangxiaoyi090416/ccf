// 描述
//     编写程序，输入n的值，求 1/1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + 1/7 - 1/8 + ... + (-1)n-1·1/n 的值。
// 输入
//     输入一个正整数n。1 <= n <= 1000。
// 输出
//     输出一个实数，为表达式的值，保留到小数点后四位。
// 样例输入
//     2
// 样例输出
//     0.5000

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double s = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int c = i % 2 == 1 ? 1 : -1;
        s += double(c) / double(i);
    }

    cout << fixed << setprecision(4) << s << endl;

    return 0;
}