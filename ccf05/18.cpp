// 计算鞍点
//     给定一个5*5的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值。
//     例如：在下面的例子中（第4行第1列的元素就是鞍点，值为8 ）。
// 输入:
//     输入包含一个5行5列的矩阵。
// 输出:
//     如果存在鞍点，输出鞍点所在的行、列及其值，如果不存在，输出"not found"。
// 样例输入:
//     11 3 5 6 9
//     12 4 7 8 10
//     10 5 6 9 11
//     8  6 4 7 2
//     15 10 11 20 25
// 样例输出:
//     4 1 8

#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
    int maximum[5];
    int minimum[5];
    int m[5][5];
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cin >> m[y][x];
        }
    }
    for (int y = 0; y < 5; y++)
    {
        maximum[y] = m[y][0];
        for (int x = 1; x < 5; x++)
            maximum[y] = max(m[y][x], maximum[y]);
    }
    for (int x = 0; x < 5; x++)
    {
        minimum[x] = m[x][0];
        for (int y = 0; y < 5; y++)
            minimum[x] = min(m[y][x], minimum[x]);
    }
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (m[y][x] == maximum[y] && m[y][x] == minimum[x])
            {
                cout << y + 1 << " " << x + 1 << " " << m[y][x] << endl;
                return 0;
            }
        }
    }
    cout << "not found" << endl;

    return 0;
}