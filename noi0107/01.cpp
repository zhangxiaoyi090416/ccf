// 1.统计数字字符个数
//     输入一行字符，统计出其中数字字符的个数。
// 输入:
//     一行字符串，总长度不超过255。
// 输出:
//     输出为1行，输出字符串里面数字字符的个数。
// 样例输入:
//     Peking University is set up at 1898.
// 样例输出:
//     4

#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char t[256];
    cin.getline(t, 256);
    int x = 0;
    for (int i = 0; i < strlen(t); i++)
    {
        if (t[i] >= '0' && t[i] <= '9')
        {
            x++;
        }
        else if (t[i] == '\0')
        {
            break;
        }
    }
    cout << x;
    return 0;
}