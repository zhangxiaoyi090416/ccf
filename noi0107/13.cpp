// 将字符串中的小写字母转换成大写字母【1.7编程基础之字符串11】
//     给定一个字符串，将其中所有的小写字母转换成大写字母。
// 输入:
//     输入一行，包含一个字符串（长度不超过100，可能包含空格）。
// 输出:
//     输出转换后的字符串。
// 样例输入:
//     helloworld123Ha
// 样例输出:
//     HELLOWORLD123HA

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    getline(cin, x);
    for (auto &c : x)
    {
        if (islower(c))
        {
            c = toupper(c);
        }
    }
    cout << x << endl;
    return 0;
}