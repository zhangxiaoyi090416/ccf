// 收集瓶盖赢大奖
//     某饮料公司最近推出了一个“收集瓶盖赢大奖”的活动：如果你拥有10个印有“幸运”、或20个印有“鼓励”的瓶盖，就可以兑换一个神秘大奖。现分别给出你拥有的印有“幸运”和“鼓励”的瓶盖数，判断是否可以去兑换大奖。若可以兑换大奖，输出1，否则输出0。
// 输入:
//     一行，包含两个整数，分别是印有“幸运”和“鼓励”的瓶盖数，用一个空格隔开。
// 输出:
//     一行。若可以兑换大奖，输出1，否则输出0。
// 样例输入:
//     11 19
// 样例输出:
//     1

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a >= 10 or b >= 20)
        cout << 1 << endl;
    else
        cout << 1 << endl;
    return 0;
}