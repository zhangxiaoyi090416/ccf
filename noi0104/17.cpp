// 判断闰年
//     判断某年是否是闰年。如果公元a年是闰年输出Y，否则输出N。
// 输入:
//     输入只有一行，包含一个整数a(0 < a < 3000)。
// 输出:
//      一行，如果公元a年是闰年输出Y，否则输出N。
// 样例输入:
//     2006
// 样例输出:
//     N

#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;
    if (a % 400 == 0)
        cout << "Y" << endl;
    else
    {
        if (a % 100 == 0)
            cout << "N" << endl;
        else if (a % 4 == 0)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}