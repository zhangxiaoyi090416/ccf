// 描述
//     已知：Sn= 1＋1／2＋1／3＋…＋1／n。显然对于任意一个整数K，当n足够大的时候，Sn大于K。
//     现给出一个整数K（1<=k<=15），要求计算出一个最小的n；使得Sn＞K。
// 输入
//     一个整数K。
// 输出
//     一个整数n。
// 样例输入
//     1
// 样例输出
//     2

#include <iostream>

using namespace std;

int main()
{
    int k, n = 1;
    double t = 1;

    cin >> k;

    do
    {
        n++;
        t += 1.0 / n;
    } while (t < k);

    cout << n << endl;

    return 0;
}