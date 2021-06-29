// 描述
//     给定若干个四位数，求出其中满足以下条件的数的个数：
//     个位数上的数字减去千位数上的数字，再减去百位数上的数字，再减去十位数上的数字的结果大于零。
// 输入
//     输入为两行，第一行为四位数的个数n，第二行为n个的四位数，数与数之间以一个空格分开。(n <= 100)
// 输出
//     输出为一行，包含一个整数，表示满足条件的四位数的个数。
// 样例输入
//     5
//     1234 1349 6119 2123 5017
// 样例输出
//     3
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, r = 0;
    vector<int> numbers(4);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;

        for (int j = 0; j < 4; j++)
        {
            numbers[j] = x % 10;
            x /= 10;
        }

        if (numbers[0] - numbers[1] - numbers[2] - numbers[3] > 0)
        {
            r++;
        }
    }

    cout << r << endl;

    return 0;
}