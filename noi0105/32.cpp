// 描述
//     有一个分数序列 q1/p1,q2/p2,q3/p3,q4/p4,q5/p5,.... ,其中qi+1= qi+ pi, pi+1=qi, p1= 1, q1= 2。比如这个序列前6项分别是2/1,3/2,5/3,8/5,13/8,21/13。求这个分数序列的前n项之和。
// 输入
//     输入有一行，包含一个正整数n(n <= 30)。
// 输出
//     输出有一行，包含一个浮点数，表示分数序列前n项的和，精确到小数点后4位。
// 样例输入
//     2
// 样例输出
//     3.5000

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, p = 1, q = 2;
    double s = 2;

    cin >> n;

    for (int i = 1; i < n; i++)
    {
        q = q + p;
        p = q - p;
        s += double(q) / double(p);
    }

    cout << fixed << setprecision(4) << s << endl;

    return 0;
}