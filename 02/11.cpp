// 判断数正负
//     给定一个整数N，判断其正负。如果N>0，输出positive；如果N=0，输出zero；如果N<0，输出negative。
// 输入:
//     一个整数N(-10^9 <= N <= 10^9)
// 输出:
//     如果N > 0, 输出positive;
//     如果N = 0, 输出zero;
//     如果N < 0, 输出negative
// 样例输入:
//     1
// 样例输出:
//     positive

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 0)
        cout << "negative" << endl;
    else if (n == 0)
        cout << "zero" << endl;
    else
        cout << "positive" << endl;

    return 0;
}