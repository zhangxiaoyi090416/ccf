// 描述
//     输入1行句子（不多于200个单词，每个单词长度不超过100），只包含字母、空格和逗号。单词由至少一个连续的字母构成，空格和逗号都是单词间的间隔。
//     试输出第1个最长的单词和第1个最短单词。
// 输入
//     一行句子。
// 输出
//     两行输出：
//     第1行，第一个最长的单词。
//     第2行，第一个最短的单词。
// 样例输入
//     I am studying Programming language C in Peking University
// 样例输出
//     Programming
//     I
// 提示
//     如果所有单词长度相同，那么第一个单词既是最长单词也是最短单词。

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;

    getline(cin, a);

    string l, s = a, w;

    for (auto c : a)
    {
        if (c == ' ' || c == ',')
        {
            if (w.size() > 0)
            {
                if (w.size() > l.size())
                {
                    l = w;
                }
                if (w.size() < s.size())
                {
                    s = w;
                }

                w = "";
            }
        }
        else
        {
            w += c;
        }
    }

    if (w.size() > 0)
    {
        if (w.size() > l.size())
        {
            l = w;
        }
        if (w.size() < s.size())
        {
            s = w;
        }
    }

    cout << l << endl;
    cout << s << endl;

    return 0;
}