// 输出保留12位小数的浮点数
//     读入一个双精度浮点数，保留12位小数，输出这个浮点数。
// 输入:
//     只有一行，一个双精度浮点数。
// 输出:
//     也只有一行，保留12位小数的浮点数。
// 样例输入:
//     3.1415926535798932
// 样例输出:
//     3.141592653580

// 02/02

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n;

    // cpp stream
    cin >> n;
    cout << fixed << setprecision(12) << n << endl;
}