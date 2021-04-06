// 与7无关的数【1.5编程基础之循环控制34】
//     一个正整数，如果它能被7整除，或者它的十进制表示法中某一位上的数字为7，则称其为与7相关的数。现求所有小于等于n(n<100)与7无关的正整数的平方和。
// 输入:
//     输入为一行,正整数n(n < 100)
// 输出:
//     输出一行，包含一个整数，即小于等于n的所有与7无关的正整数的平方和。
// 样例输入:
//     21
// 样例输出:
//     2336

#include <iostream>

using namespace std;

int main()
{
    int n;
    int p = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 7 == 0 || i == 17 || i == 27 || i == 37 || i == 47 || i == 57 || i == 67 || i == 71 || i == 72 || i == 73 || i == 74 || i == 75 || i == 76 || i == 78 || i == 79 || i == 87 || i == 97)
            continue;
        else
            p += i * i;
    }
    cout << p << endl;

    return 0;
}