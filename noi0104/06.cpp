// 判断是否为两位数
//     判断一个正整数是否是两位数(即大于等于10且小于等于99)。若该正整数是两位数，输出1，否则输出0。
// 输入:
//     一个正整数，不超过1000。
// 输出:
//     一行。若该正整数是两位数，输出1，否则输出0。
// 样例输入:
//     54
// 样例输出:
//     1

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (10 <= n && n <= 99)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}