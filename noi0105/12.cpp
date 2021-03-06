// 描述
//     输出一个整数序列中与指定数字相同的数的个数。
// 输入
//     输入包含2行：
//     第1行为N和m，表示整数序列的长度(N <= 100)和指定的数字， 中间用一个空格分开；
//     第2行为N个整数，整数之间以一个空格分开。
// 输出
//     输出为N个数中与m相同的数的个数。
// 样例输入
//     3 2
//     2 3 2
// 样例输出
//     2

#include <iostream>

using namespace std;

int main()
{
    int n, m, cnt = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == m)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}