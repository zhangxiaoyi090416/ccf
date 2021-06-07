// 质因数分解【1.5编程基础之循环控制38】Noip2012普及组第1题
//     已知正整数n是两个不同的质数的乘积，试求出较大的那个质数。
// 输入:
//     输入只有一行，包含一个正整数 n。
//     对于60%的数据，6 ≤ n ≤ 1000。
//     对于100%的数据，6 ≤ n ≤ 2*10^9。
// 输出:
//     输出只有一行，包含一个正整数 p，即较大的那个质数。
// 样例输入:
//     21
// 样例输出:
//     7

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 2; i <= int(sqrt(a)); i++)
    {
        if (a % i == 0)
        {
            cout << a / i << endl;
            break;
        }
    }
    return 0;
}