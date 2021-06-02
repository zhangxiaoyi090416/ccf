// 描述
//     输入两个正整数A和B，求A*B。
// 输入
//     一行，包含两个正整数A和B，中间用单个空格隔开。1 <= A,B <= 50000。
// 输出
//     一个整数，即A*B的值。
// 样例输入
//     3 4
// 样例输出
//     12

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long int a, b;

    cin >> a >> b;
    cout << a * b << endl;

    return 0;
}