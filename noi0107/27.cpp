// 描述
//     输入一个句子（一行），将句子中的每一个单词翻转后输出。
// 输入
//     只有一行，为一个字符串，不超过500个字符。单词之间以空格隔开。
// 输出
//     翻转每一个单词后的字符串，单词之间的空格需与原文一致。
// 样例输入
//     hello world
// 样例输出
//     olleh dlrow

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, w;

    getline(cin, s);

    for (auto c : s)
    {
        if (c == ' ')
        {
            reverse(w.begin(), w.end());
            cout << w << " ";
            w.clear();
        }
        else
        {
            w += c;
        }
    }
    reverse(w.begin(), w.end());
    cout << w << endl;

    return 0;
}