// 计算矩阵边缘元素之和
//     输入一个整数矩阵，计算位于矩阵边缘的元素之和。所谓矩阵边缘的元素，就是第一行和最后一行的元素以及第一列和最后一列的元素。
// 输入:
//     第一行分别为矩阵的行数m和列数n（m<100，n<100），两者之间以一个空格分开。
//     接下来输入的m行数据中，每行包含n个整数，整数之间以一个空格分开。
// 输出:
//     输出对应矩阵的边缘元素和。
// 样例输入:
//     3 3
//     3 4 1
//     3 7 1
//     2 0 1
// 样例输出:
//     15

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    const int pq = a, qp = b;
    int x[pq][qp];
    for (int i = 0; i < a; i++)
    {
        for (int s = 0; s < b; s++)
        {
            cin >> x[i][s];
        }
    }
    int k = 0, m = 1;
    for (int i = 0; i < a; i++)
    {
        if (m == 1)
        {
            for (int s = 0; s < b; s++)
            {
                k += x[0][s];
            }
            m++;
        }
        else if (1 < m && m < b)
        {
            k += x[m - 1][0] + x[m - 1][b - 1];
            m++;
        }
        else if (m == a)
        {
            for (int s = 0; s < b; s++)
            {
                k += x[a - 1][s];
            }
            m++;
        }
    }
    cout << k << endl;

    return 0;
}