// 描述
//     对于一个字符串来说，定义一次循环移位操作为：将字符串的第一个字符移动到末尾形成新的字符串。
//     给定两个字符串s1和s2，要求判定其中一个字符串是否是另一字符串通过若干次循环移位后的新字符串的子串。例如CDAA是由AABCD两次移位后产生的新串BCDAA的子串，
//     而ABCD与ACBD则不能通过多次移位来得到其中一个字符串是新串的子串。
// 输入
//     一行，包含两个字符串，中间由单个空格隔开。字符串只包含字母和数字，长度不超过30。
// 输出
//     如果一个字符串是另一字符串通过若干次循环移位产生的新串的子串，则输出true，否则输出false。
// 样例输入
//     AABCD CDAA
// 样例输出
//     true

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    if (a.size() < b.size())
    {
        swap(a, b);
    }

    for (int i = 0; i < a.size(); i++)
    {
        string c = a.substr(i);
        c.append(a.substr(0, i));

        if (c.find(b) != string::npos)
        {
            cout << "true" << endl;
            return 0;
        }
    }
    cout << "false" << endl;
    return 0;
}