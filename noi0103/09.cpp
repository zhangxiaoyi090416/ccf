// 描述
//     给出圆的半径，求圆的直径、周长和面积。
// 输入
//     输入包含一个实数r（0 < r <= 10,000），表示圆的半径。
// 输出
//     输出一行，包含三个数，分别表示圆的直径、周长、面积，数与数之间以一个空格分开，每个数保留小数点后4位。
// 样例输入
//     3.0
// 样例输出
//     6.0000 18.8495 28.2743
// 提示
//     如果圆的半径是r，那么圆的直径、周长、面积分别是2*r、2 * pi * r、pi * r * r，其中约定pi＝3.14159。
//     可以使用printf("%.4lf", ...)实现保留小数点后4位。

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n;

    cin >> n;
    cout << fixed << setprecision(4) << 2 * n << " " << 2 * 3.14159 * n << " " << 3.14159 * n * n << endl;

    return 0;
}