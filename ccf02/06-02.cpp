// 计算球的体积【1.3编程基础之算术表达式与顺序执行12】
//     对于半径为r的球，其体积的计算公式为V=4/3*πr3，这里取π=3.14。现给定r，即球半径，类型为double，求球的体积V，保留到小数点后2位。
// 输入:
//     输入为一个不超过100的非负实数，即球半径，类型为double。
// 输出:
//    输出一个实数，即球的体积，保留到小数点后2位。
// 样例输入:
//     4
// 样例输出:
//     267.95

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n;
    float pi = 3.14;

    cin >> n;
    cout << fixed << setprecision(2) << 0.75 * pi * n * n * n << endl;

    return 0;
}
