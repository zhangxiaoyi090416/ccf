// 描述
//     输入一个ASCII码，输出对应的字符。
// 输入
//     一个整数，即字符的ASCII码，保证存在对应的可见字符。
// 输出
//     一行，包含相应的字符。
// 样例输入
//     65
// 样例输出
//     A

#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;
    cout << char(a) << endl;

    return 0;
}