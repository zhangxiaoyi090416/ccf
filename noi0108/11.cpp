// 图像旋转【1.8编程基础之多维数组10】
//     输入一个n行m列的黑白图像，将它顺时针旋转90度后输出。
// 输入:
//     第一行包含两个整数n和m，表示图像包含像素点的行数和列数。1<=n<=100，1<=m<=100。
//     接下来n行，每行m个整数，表示图像的每个像素点灰度。相邻两个整数之间用单个空格隔开，每个元素均在0~255之间。
// 输出:
//     m行，每行n个整数，为顺时针旋转90度后的图像。相邻两个整数用单个空格隔开。
// 样例输入:
//     3 3
//     1 2 3
//     4 5 6
//     7 8 9
// 样例输出:
//     7 4 1
//     8 5 2
//     9 6 3

#include <iostream>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int a[n][m];
    int b[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}