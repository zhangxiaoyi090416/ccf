// 第n小的质数
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

int main()
{
    int n, p = 1, i = 0;
    cin >> n;

    while (true)
    {
        p++;

        bool prime = true;
        for (int i = 2; i <= sqrt(p); i++)
        {
            if (p % i == 0)
            {
                prime = false;
                break;
            };
        }

        if (prime)
        {
            i++;
            if (i == n)
            {
                break;
            }
        }
    }

    cout << p << endl;
    return 0;
}