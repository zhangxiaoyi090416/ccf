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
    int m[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> m[i][j];
        }
    }
    int s = 0;
    for (int i = 0; i < a; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < b; j++)
            {
                s += m[i][j];
            }
        }
        else if (i == a - 1)
        {
            for (int j = 0; j < b; j++)
            {
                s += m[i][j];
            }
        }
        else
        {
            if (b == 1)
            {
                s += m[i][0];
            }
            else
            {
                s += m[i][0] + m[i][b - 1];
            }
        }
    }
    cout << s << endl;

    return 0;
}