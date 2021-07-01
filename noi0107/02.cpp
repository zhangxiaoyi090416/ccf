// 找第一个只出现一次的字
//     给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。
// 输入:
//     一个字符串，长度小于100000。
// 输出:
//     输出第一个仅出现一次的字符，若没有则输出no。
// 样例输入:                   样例输出:
//     abcabd                    c

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string x;
    cin >> x;

    map<char, int> fre;

    for (auto c : x)
    {
        fre[c]++;
    }

    for (auto c : x)
    {
        if (fre[c] == 1)
        {
            cout << c << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}