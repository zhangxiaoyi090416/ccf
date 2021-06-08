// 找第一个只出现一次的字
//     给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。
// 输入:
//     一个字符串，长度小于100000。
// 输出:
//     输出第一个仅出现一次的字符，若没有则输出no。
// 样例输入:                   样例输出:
//     abcabd                    c
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    char x[100000];
    cin >> x;
    for (int i = 0; i < strlen(x); i++)
    {
        int cnt = 0;
        for (int j = 0; j < strlen(x); j++)
        {
            if (x[i] == x[j])
            {
                cnt++;
            }
        }
        if (cnt == 1)
        {
            cout << x[i] << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}