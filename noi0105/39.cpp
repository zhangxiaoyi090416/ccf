// 与7无关的数
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
        if (i % 7 == 0)
            continue;

        int x = i;
        bool seven = false;
        while (x)
        {
            if (x % 10 == 7)
            {
                seven = true;
                break;
            }
            x /= 10;
        }
        if (seven)
            continue;

        p += i * i;
    }
    cout << p << endl;

    return 0;
}