// 整数大小比较
//     输入两个整数，比较它们的大小。若x>y，输出>；若x=y，输出=；若x<y，输出<。
// 输入:
//     一行，包含两个整数x和y，中间用单个空格隔开。0<=x<2^32, -2^31<=y<2^31。
// 输出:
//     一个字符。若x > y，输出 > ；若x = y，输出 = ；若x < y，输出 < ；
// 样例输入:
//     1000 100
// 样例输出:
//     >

#include <iostream>

using namespace std;

int main()
{

    int a, b;

    cin >> a >> b;

    if (a > b)
        cout << ">" << endl;
    else if (a == b)
        cout << "=" << endl;
    else
        cout << "<" << endl;

    return 0;
}