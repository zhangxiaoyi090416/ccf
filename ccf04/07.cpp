// 求出e的值【1.5编程基础之循环控制32】
//    利用公式e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! ，求e的值，要求保留小数点后10位。
// 输入:
//     输入只有一行，该行包含一个整数n（2<=n<=15），表示计算e时累加到1/n！。
// 输出:
//     输出只有一行，该行包含计算出来的e的值，要求打印小数点后10位。
// 样例输入:
//     10
// 样例输出:
//     2.7182818011

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i;
    double p = 1;
    cin >> n;
    for (int z = 1; z <= n; z++)
    {
        int k = 1;
        for (i = 1; i <= z; i++)
        {
            k *= i;
        }
        p += 1.0 / k;
    }
    cout << fixed << setprecision(10) << p << endl;
    return 0;
}
