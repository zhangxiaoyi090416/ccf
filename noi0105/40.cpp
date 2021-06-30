// 数1的个数
//     给定一个十进制正整数n(1<=n<=10000)，写下从1到n的所有整数，然后数一下其中出现的数字“1”的个数。
//     例如当n=2时，写下1,2。这样只出现了1个“1”；当n=12时，写下1，2，3，4，5，6，7，8，9，10，11，12。这样出现了5个“1”。
// 输入:
//     正整数n。1 <= n <= 10000。
// 输出:
//     一个正整数，即“1”的个数。
// 样例输入:
//     12
// 样例输出:
//     5

#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        int k = i;
        while (k > 0)
        {
            if (k % 10 == 1)
                cnt++;
            k = k / 10;
        }
    }
    cout << cnt << endl;
    return 0;
}