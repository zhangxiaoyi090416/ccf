// 数组逆序重
//     将一个数组中的值按逆序重新存放。例如，原来的顺序为8,6,5,4,1。要求改为1,4,5,6,8。
// 输入:
//     输入为两行：第一行数组中元素的个数n（1<n<100)，第二行是n个整数，每两个整数之间用空格分隔。
// 输出:
//     输出为一行：输出逆序后数组的整数，每两个整数之间用空格分隔。
// 样例输入:
//     5
//     8 6 5 4 1
// 样例输出:
//     1 4 5 6 8

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        int b = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = b;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}