// 描述
//     给定一个字符，用它构造一个底边长5个字符，高3个字符的等腰字符三角形。
// 输入
//     输入只有一行， 包含一个字符。
// 输出
//     该字符构成的等腰三角形，底边长5个字符，高3个字符。
//     样例输入
//     *
// 样例输出
//       *
//      ***
//     *****

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char a;

    cin >> a;
    cout << "  " << a << endl;
    cout << " " << a << a << a << endl;
    cout << a << a << a << a << a << endl;

    return 0;
}