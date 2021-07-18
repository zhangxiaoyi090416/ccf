// 描述
//     两个相差为2的素数称为素数对，如5和7，17和19等，本题目要求找出所有两个数均不大于n的素数对。
// 输入
//     一个正整数n。1 <= n <= 10000。
// 输出
//     所有小于等于n的素数对。每对素数对输出一行，中间用单个空格隔开。若没有找到任何素数对，输出empty。
// 样例输入
//     100
// 样例输出
//     3 5
//     5 7
//     11 13
//     17 19
//     29 31
//     41 43
//     59 61
//     71 73

#include <iostream>
#include <cmath>

using namespace std;

bool prime(int n)
{
    for (auto i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    bool found = false;

    cin >> n;

    for (auto i = 3; i < n - 1; i++)
    {
        if (prime(i) && prime(i + 2))
        {
            cout << i << " " << i + 2 << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "empty" << endl;
    }

    return 0;
}