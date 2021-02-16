// 5.字符菱形
//     给定一个字符，用它构造一个对角线长5个字符，倾斜放置的菱形。
// 输入:
//     输入只有一行， 包含一个字符。
// 输出:
//     该字符构成的菱形。
// 样例输入:
//     *
// 样例输出:
//     *
//    ***
//   *****
//    ***
//     *

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
    cout << " " << a << a << a << endl;
    cout << "  " << a << endl;
}