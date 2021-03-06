// 描述
//     用手机发短信，一条短信资费为0.1元，但限定一条短信的内容在70个字以内（包括70个字）。如果你一次所发送的短信超过了70个字，
//     则会按照每70个字一条短信的限制把它分割成多条短信发送。假设已经知道你当月所发送的短信的字数，试统计一下你当月短信的总资费。
// 输入
//     第一行是整数n，表示当月发送短信的总次数，接着n行每行一个整数，表示每次短信的字数。
// 输出
//     输出一行，当月短信总资费，单位为元，精确到小数点后1位。
// 样例输入
//     10
//     39
//     49
//     42
//     61
//     44
//     147
//     42
//     72
//     35
//     46
// 样例输出
//     1.3

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double price(int n)
{
    return ceil(double(n) / 70) * 0.1;
}

int main()
{
    int n;
    double s = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int l;

        cin >> l;
        s += price(l);
    }

    cout << fixed << setprecision(1) << s << endl;

    return 0;
}