// 描述
//     一个十进制自然数,它的七进制与九进制表示都是三位数，且七进制与九进制的三位数码表示顺序正好相反。编程求此自然数,并输出显示。
// 输入
//     无。
// 输出
//     三行：
//     第一行是此自然数的十进制表示；
//     第二行是此自然数的七进制表示；
//     第三行是此自然数的九进制表示。
// 样例输入
//     （无）
// 样例输出
//     （不提供）

#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            for (int k = 1; k < 7; k++)
            {
                int s = i * 49 + j * 7 + k;
                int n = k * 81 + j * 9 + i;
                if (s == n)
                {
                    cout << s << endl;
                    cout << i << j << k << endl;
                    cout << k << j << i << endl;
                }
            }
        }
    }

    return 0;
}