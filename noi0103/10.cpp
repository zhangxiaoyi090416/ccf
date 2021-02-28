// 描述
//     对于阻值为r1和r2的电阻，其并联电阻阻值公式计算如下：
//     R = 1/(1/r1 + 1/r2)
// 输入
//     两个电阻阻抗大小，浮点型，以一个空格分开。
// 输出
//     并联之后的阻抗大小，结果保留小数点后2位
// 样例输入
//     1 2
// 样例输出
//     0.67
// 提示
//     计算过程使用float类型

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b;

    cin >> a >> b;
    cout << fixed << setprecision(2) << 1 / (1 / a + 1 / b) << endl;

    return 0;
}