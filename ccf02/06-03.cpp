// 反向输出一个三位数【1.3编程基础之算术表达式与顺序执行13】
//     将一个三位数反向输出，例如输入358，反向输出853。
// 输入:
//     一个三位数n。
// 输出:
//     反向输出n。
// 样例输入:
//     100
// 样例输出:
//     001

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char a, b, c;

    a = getchar();
    b = getchar();
    c = getchar();
    cout << c << b << a << endl;

    return 0;

    // int n, x, y, z;
    // cin >> n;
    // x = n % 10;
    // y = (n % 100 - x) / 10;
    // z = (n - x - 10 * y) / 100;
    // cout << x << y << z;
    // return 0;
}
