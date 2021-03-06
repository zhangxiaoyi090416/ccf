// 描述
//     监护室每小时测量一次病人的血压，若收缩压在90 - 140之间并且舒张压在60 - 90之间（包含端点值）则称之为正常，现给出某病人若干次测量的血压值，计算病人保持正常血压的最长小时数。
// 输入
//     第一行为一个正整数n，n < 100
//     其后有n行，每行2个正整数，分别为一次测量的收缩压和舒张压，中间以一个空格分隔。
// 输出
//     输出仅一行，血压连续正常的最长小时数。
// 样例输入
//     4
//     100 80
//     90 50
//     120 60
//     140 90
// 样例输出
//     2

#include <iostream>

using namespace std;

int main()
{
    int n, r = 0, c = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int h, l;

        cin >> h >> l;

        if (h >= 90 && h <= 140 && l >= 60 && l <= 90)
        {
            c++;
            if (c > r)
            {
                r = c;
            }
        }
        else
        {
            c = 0;
        }
    }

    cout << r << endl;

    return 0;
}