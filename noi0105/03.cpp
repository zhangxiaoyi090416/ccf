// 均值
//     给出一组样本数据，包含n个浮点数，计算其均值，精确到小数点后4位。
// 输入:
//     输入有两行，第一行包含一个整数n（n小于100），代表样本容量；第二行包含n个绝对值不超过1000的浮点数，代表各个样本数据。
// 输出:
//     输出一行，包含一个浮点数，表示均值，精确到小数点后4位。
// 样例输入:
//     2
//     1.0 3.0
// 样例输出:
//     2.0000

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    float s = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        float a;
        cin >> a;
        s += a;
    }
    cout << fixed << setprecision(4) << s / n;

    return 0;
}
