// 描述
//     分别定义int，short类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。
// 输入
//     无。
// 输出
//     一行，两个整数，分别是两个变量的存储空间大小，用一个空格隔开。
// 样例输入
//     （无）
// 样例输出
//     （不提供）
// 提示
//     使用sizeof函数可以得到一个特定变量的存储空间大小。例如：对于int型变量x，sizeof(x)的值为4，即x的存储空间为4字节。\

#include <iostream>

using namespace std;

int main()
{
    int a;
    short b;

    cin >> a >> b;
    cout << sizeof(a) << " " << sizeof(b) << endl;

    return 0;
}