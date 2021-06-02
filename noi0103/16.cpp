// 描述
//     已知线段的两个端点的坐标A（Xa,Ya），B（Xb，Yb），求线段AB的长度。
// 输入
//     共两行。
//     第一行是两个实数Xa，Ya，即A的坐标。
//     第二行是两个实数Xb，Yb，即B的坐标。
//     输入中所有实数的绝对值均不超过10000。
// 输出
//     一个实数，即线段AB的长度，保留到小数点后3位。
// 样例输入
//     1 1
//     2 2
// 样例输出
//     1.414

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double xa, ya, xb, yb;

    cin >> xa >> ya >> xb >> yb;
    cout << fixed << setprecision(3) << sqrt((yb - ya) * (yb - ya) + (xb - xa) * (xb - xa)) << endl;

    return 0;
}