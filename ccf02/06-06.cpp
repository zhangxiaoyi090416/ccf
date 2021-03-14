// 计算三角形面积【1.3编程基础之算术表达式与顺序执行18】
//     平面上有一个三角形，它的三个顶点坐标分别为(x1, y1), (x2, y2), (x3, y3)，那么请问这个三角形的面积是多少，精确到小数点后两位。
// 输入:
//     输入仅一行，包括6个单精度浮点数，分别对应x1, y1, x2, y2, x3, y3。
// 输出:
//     输出也是一行，输出三角形的面积，精确到小数点后两位。
// 样例输入:
//     0 0 4 0 0 3
// 样例输出:
//     6.00

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float a, b, c, d, e, f, s, x, y, z;

    cin >> a >> b >> c >> d >> e >> f;
    x = sqrt((c - a) * (c - a) + (d - b) * (d - b));
    y = sqrt((e - c) * (e - c) + (f - d) * (f - d));
    z = sqrt((a - e) * (a - e) + (b - f) * (b - f));
    s = (x + y + z) / 2;
    cout << fixed << setprecision(2) << sqrt(s * (s - x) * (s - y) * (s - z));

    return 0;
}