// 描述
//     约瑟夫问题：有ｎ只猴子，按顺时针方向围成一圈选大王（编号从１到ｎ），从第１号开始报数，一直数到ｍ，数到ｍ的猴子退出圈外，
//     剩下的猴子再接着从1开始报数。就这样，直到圈内只剩下一只猴子时，这个猴子就是猴王，编程求输入ｎ，ｍ后，输出最后猴王的编号。
// 输入
//     每行是用空格分开的两个整数，第一个是 n, 第二个是 m ( 0 < m,n <=300)。最后一行是：
//     0 0
// 输出
//     对于每行输入数据（最后一行除外)，输出数据也是一行，即最后猴王的编号
// 样例输入
//     6 2
//     12 4
//     8 3
//     0 0
// 样例输出
//     5
//     1
//     7

#include <iostream>
#include <list>

using namespace std;

int joseph(list<int> &monkeys, int m)
{
    auto it = monkeys.begin();
    while (monkeys.size() > 1)
    {
        for (int i = 0; i < m - 1; i++)
        {
            it++;
            if (it == monkeys.end())
            {
                it = monkeys.begin();
            }
        }
        it = monkeys.erase(it);
        if (it == monkeys.end())
        {
            it = monkeys.begin();
        }
    }
    return monkeys.front();
}

int main()
{
    while (true)
    {
        int m, n;
        list<int> monkeys;

        cin >> n >> m;
        if (m == 0 && n == 0)
            break;

        for (int i = 1; i <= n; i++)
        {
            monkeys.push_back(i);
        }

        cout << joseph(monkeys, m) << endl;
    }

    return 0;
}