// 第n小的质数【1.5编程基础之循环控制39】
//     输入一个正整数n，求第n小的质数。
// 输入:
//     一个不超过10000的正整数n。
// 输出:
//     第n小的质数。
// 样例输入:
//     10
// 样例输出:
//     29

#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n)
{
    for (int i = 2; i <= int(sqrt(n)); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, p = 1, i = 1;
    cin >> n;
    while (i <= n)
    {
        while (true)
        {
            p++;
            if (prime(p))
            {
                break;
            }
        }
        i++;
    }
    cout << p << endl;
    return 0;
}