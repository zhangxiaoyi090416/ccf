// 11.大小写字母互换
//     把一个字符串中所有出现的大写字母都替换成小写字母，同时把小写字母替换成大写字母。
// 输入:
//     输入一行：待互换的字符串。
// 输出:
//     输出一行：完成互换的字符串(字符串长度小于80)。
// 样例输入:
//     If so, you already have a Google Account. You can sign in on the right.
// 样例输出:
//     iF SO, YOU ALREADY HAVE A gOOGLE aCCOUNT. yOU CAN SIGN IN ON THE RIGHT.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[80];
    cin.getline(a, 80);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 'a' - 'A';
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 'a' - 'A';
        }
    }
    for (int i = 0; i < strlen(a); i++)
    {
        cout << a[i];
    }
    cout << endl;
    return 0;
}