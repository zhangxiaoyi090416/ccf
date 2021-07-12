// 描述
//     一个句子中也许有多个连续空格，过滤掉多余的空格，只留下一个空格。
// 输入
//     一行，一个字符串（长度不超过200），句子的头和尾都没有空格。
// 输出
//     过滤之后的句子。
// 样例输入
//     Hello      world.This is    c language.
// 样例输出
//     Hello world.This is c language.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;

    getline(cin, a);

    bool space = false;

    for (auto c : a)
    {
        if (c == ' ')
        {
            if (space == false)
            {
                cout << ' ';
                space = true;
            }
        }
        else
        {
            cout << c;
            space = false;
        }
    }

    return 0;
}
