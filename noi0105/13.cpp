// 描述
//     给出一个整数a和一个正整数n，求乘方an。
// 输入
//     一行，包含两个整数a和n。-1000000 <= a <= 1000000，1 <= n <= 10000。
// 输出
//     一个整数，即乘方结果。题目保证最终结果的绝对值不超过1000000。
// 样例输入
//     2 3
// 样例输出
//     8

#include <iostream>

using namespace std;

int main()
{
    int a, n, r = 1;

    cin >> a >> n;

    for (int i = 0; i < n; i++)
    {
        r *= a;
    }

    cout << r << endl;

    return 0;
}