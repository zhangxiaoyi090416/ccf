// 描述
//     编写程序，读入一行英文(只包含字母和空格，单词间以单个空格分隔)，将所有单词的顺序倒排并输出，依然以单个空格分隔。
// 输入
//     输入为一个字符串（字符串长度至多为100）。
// 输出
//     输出为按要求排序后的字符串。
// 样例输入
//     I am a student
// 样例输出
//     student a am I

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    getline(cin, s);

    auto end = s.size();
    auto start = s.rfind(" ", end - 1) + 1;
    while (start != string::npos + 1)
    {
        auto x = s.substr(start, end - start);
        cout << x << " ";
        end = start - 1;
        start = s.rfind(" ", end - 1) + 1;
    }
    end = s.find(" ");
    cout << s.substr(0, end);
    cout << endl;

    return 0;
}