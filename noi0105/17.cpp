// 描述
//     菲波那契数列是指这样的数列: 数列的第一个和第二个数都为1，接下来每个数都等于前面2个数之和。
//     给出一个正整数k，要求菲波那契数列中第k个数是多少。
// 输入
//     输入一行，包含一个正整数k。（1 <= k <= 46）
// 输出
//     输出一行，包含一个正整数，表示菲波那契数列中第k个数的大小
// 样例输入
//     19
// 样例输出
//     4181

#include <iostream>

using namespace std;

int main()
{
    int k, a = 1, b = 1;

    cin >> k;

    for (int i = 1; i <= k; i++)
    {
        if (i == 1 || i == 2)
            b = 1;
        else
        {
            int t = b + a;
            a = b;
            b = t;
        }
    }

    cout << b << endl;

    return 0;
}