// 描述
//     给定一个单词，如果该单词以er、ly或者ing后缀结尾， 则删除该后缀（题目保证删除后缀后的单词长度不为0）， 否则不进行任何操作。
// 输入
//     输入一行，包含一个单词（单词中间没有空格，每个单词最大长度为32）。
// 输出
//     输出按照题目要求处理后的单词。
// 样例输入
//     referer
// 样例输出
//     refer

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;

    cin >> a;

    if (a.size() > 2 && a.substr(a.size() - 2) == "er")
    {
        cout << a.substr(0, a.size() - 2) << endl;
    }
    else if (a.size() > 2 && a.substr(a.size() - 2) == "ly")
    {
        cout << a.substr(0, a.size() - 2) << endl;
    }
    else if (a.size() > 3 && a.substr(a.size() - 3) == "ing")
    {
        cout << a.substr(0, a.size() - 3) << endl;
    }
    else
    {
        cout << a << endl;
    }

    return 0;
}
