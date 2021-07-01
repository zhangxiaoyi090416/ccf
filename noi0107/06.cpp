// 合法C标识符查【1.7编程基础之字符串06】
//     给定一个不包含空白符的字符串，请判断是否是C语言合法的标识符号(注：题目保证这些字符串一定不是C语言的保留字)。
// C语言标识符要求：
//     1.非保留字；
//     2.只包含字母、数字及下划线（“_”）。
//     3.不以数字开头。
// 输入:
//     一行，包含一个字符串，字符串中不包含任何空白字符，且长度不大于20。
// 输出:
//     一行，如果它是C语言的合法标识符，则输出yes，否则输出no。
// 样例输入:
//     RKPEGX9R;TWyYcp
// 样例输出:
//     no

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    getline(cin, x);

    if (isdigit(x[0]))
    {
        cout << "no" << endl;
        return 0;
    }

    for (auto c : x)
    {
        if (isdigit(c) || islower(c) || isupper(c) || c == '_')
        {
            continue;
        }
        else
        {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;

    return 0;
}