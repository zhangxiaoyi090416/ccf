// 不定方程求解【小学奥数7650】
//     给定正整数a，b，c。求不定方程 ax+by=c 关于未知数x和y的所有非负整数解组数。
// 输入:
//     一行，包含三个正整数a，b，c，两个整数之间用单个空格隔开。每个数均不大于1000。
// 输出:
//     一个整数，即不定方程的非负整数解组数。
// 样例输入:
//     2 3 18
// 样例输出:
//     4

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, sum = 0;
    cin >> a >> b >> c;
    for (int x = 0; x <= c / a; x++)
    {
        int k = (c - a * x) / b;
        if (k >= 0 && (c - a * x) % b == 0)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}