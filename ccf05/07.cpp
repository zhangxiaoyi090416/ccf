// 开关灯
//     假设有N盏灯(N为不大于5000的正整数)，从1到N按顺序依次编号，初始时全部处于开启状态；有M个人(M为不大于N的正整数)也从1到M依次编号。
//     第一个人(1号)将灯全部关闭，第二个人(2号)将编号为2的倍数的灯打开，第三个人(3号)将编号为3的倍数的灯做相反处理（即将打开的灯关闭，将关闭的灯打开）。依照编号递增顺序，
//     以后的人都和3号一样，将凡是自己编号倍数的灯做相反处理。
//     请问：当第M个人操作之后，哪几盏灯是关闭的，按从小到大输出其编号，其间用逗号间隔。
// 输入:
//     输入正整数N和M，以单个空格隔开。
// 输出:
//     顺次输出关闭的灯的编号，其间用逗号间隔。
// 样例输入:
//     10 10
// 样例输出:
//     1,4,9

#include <iostream>
using namespace std;

int main()
{
    bool light[5000];
    for (int i = 0; i < 5000; i++)
    {
        light[i] = true;
    }

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        for (int s = 0; s < n; s = s + i)
        {
            light[s] = !light[s];
        }
    }

    int i = 0;
    for (; i <= m; i++)
    {
        if (light[i] == false)
        {
            cout << i;
            break;
        }
    }
    for (i++; i <= m; i++)
    {
        if (light[i] == false)
        {
            cout << "," << i;
        }
    }
    cout << endl;

    return 0;

    // bool comma = false;
    // for (int i = 0; i < m; i++)
    // {
    //     if (light[i] == false)
    //     {
    //         if (comma)
    //             cout << ",";
    //         cout << i;
    //         comma = true;
    //     }
    // }
    // return 0;
}