// 三角形判断【1.4编程基础之逻辑表达式与条件分支16】
//     给定三个正整数，分别表示三条线段的长度，判断这三条线段能否构成一个三角形。如果能构成三角形，则输出“yes”，否则输出“no”。
// 输入:
//     输入共一行，包含三个正整数，分别表示三条线段的长度，数与数之间以一个空格分开。
// 输出:
//     如果能构成三角形，则输出“yes” ，否则输出“no”。
// 样例输入:
//     3 4 5
// 样例输出:
//     yes

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c, k;

    cin >> a >> b >> c;
    k = max(max(a, b), c);
    if (k < k + 1 + k + 2)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}