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
#include <cstring>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a, 100);
    for (int i = 0; i <= strlen(a); i++)
    {
        cout << char(toupper(a[i]));
    }
    cout << endl;
    return 0;
}