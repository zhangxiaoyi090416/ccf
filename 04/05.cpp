// 最大跨度值
//     给定一个长度为n的非负整数序列，请计算序列的最大跨度值(最大跨度值 = 最大值减去最小值)。
// 输入:
//     一共2行，第一行为序列的个数n（1 <= n <= 1000)，第二行为序列的n个不超过1000的非负整数，整数之间以一个空格分隔。
// 输出:
//     输出一行，表示序列的最大跨度值。
// 样例输入:
//     6
//     3 0 8 7 5 9
// 样例输出:
//     9

#include <iostream>

using namespace std;

int main()
{
    int n, mx = 0, mm = 1000;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > mx)
            mx = a;
        else if (a < mm)
            mm = a;
    }
    cout << mx - mm << endl;

    return 0;
}