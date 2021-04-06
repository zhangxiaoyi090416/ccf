// 求阶乘的和【1.5编程基础之循环控制31】
//     给定正整数n，求不大于n的正整数的阶乘的和（即求1!+2!+3!+...+n!），输出阶乘的和。
// 输入:
//     输入有一行，包含一个正整数n（1 < n < 12）。
// 输出:
//     输出有一行：阶乘的和。
// 样例输入:
//     5
// 样例输出:
//     153

#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    cin >> n;
    for (int i = n; i > 0; --i)
    {
        int x = 1;
        for (int j = i; j > 0; --j)
        {
            x *= j;
        }
        sum += x;
    }
    cout << sum << endl;

    return 0;
}