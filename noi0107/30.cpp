// 描述
//     有两个由字符构成的环。请写一个程序，计算这两个字符环上最长连续公共字符串的长度。例如，字符串“ABCEFAGADEGKABUVKLM”的首尾连在一起，构成一个环；
//     字符串“MADJKLUVKL”的首尾连在一起，构成一个另一个环；“UVKLMA”是这两个环的一个连续公共字符串。
// 输入
//     一行，包含两个字符串，分别对应一个字符环。这两个字符串之间用单个空格分开。字符串长度不超过255，且不包含空格等空白符。
// 输出
//     输出一个整数，表示这两个字符环上最长公共字符串的长度。
// 样例输入
//     ABCEFAGADEGKABUVKLM MADJKLUVKL
// 样例输出
//     6

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

    auto c = a.size(), d = b.size();
    a.append(a.substr(0, c - 1));
    b.append(b.substr(0, d - 1));

    for (int i = d; i > 0; i--)
    {
        for (int j = 0; j < d; j++)
        {
            auto str = b.substr(j, i);
            if (a.find(str) != string::npos)
            {
                cout << i << endl;

                return 0;
            }
        }
    }

    cout << 0 << endl;

    return 0;
}