// 最大数输出
//      输入三个整数，数与数之间以一个空格分开。 输出一个整数，即最大的整数。
// 输入:
//     输入为一行，包含三个整数，数与数之间以一个空格分开。
// 输出:
//     输出一行，包含一个整数，即最大的整数。
// 样例输入:
//     10 20 56
// 样例输出:
//     56

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    cout << max(max(a, b), c) << endl;

    return 0;
}