// 描述
//     给定非负整数n，求2n。
// 输入
//     一个整数n。0 <= n < 31。
// 输出
//     一个整数，即2的n次方。
// 样例输入
//     3
// 样例输出
//     8

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cin >> n;
    cout << int(pow(2, n)) << endl;

    return 0;
}