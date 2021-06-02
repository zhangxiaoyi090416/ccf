// 描述
//    将一个三位数反向输出。
// 输入
//    一个三位数n。
// 输出
//    反向输出n。
// 样例输入
//    100
// 样例输出
//    001

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, x, y, z;

    cin >> n;
    x = n % 10;
    y = (n % 100 - x) / 10;
    z = (n - x - 10 * y) / 100;
    cout << x << y << z;

    return 0;
}