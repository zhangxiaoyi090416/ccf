// 输出绝对值
//     输入一个浮点数，输出这个浮点数的绝对值，保留到小数点后两位。
// 输入:
//     输入一个浮点数，其绝对值不超过10000。
// 输出:
//     输出这个浮点数的绝对值，保留到小数点后两位。
// 样例输入:
//     -3.14
// 样例输出:
//     3.14

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float n;
    cin >> n;
    if (n >= 0)
        cout << fixed << setprecision(2) << n << endl;
    else
        cout << fixed << setprecision(2) << -n << endl;
    return 0;
}