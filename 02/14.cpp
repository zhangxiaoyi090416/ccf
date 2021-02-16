// 奇偶ASCII值判断
//     任意输入一个字符，判断其ASCII是否是奇数，若是，输出YES，否则，输出NO。例如，字符A的ASCII值是65，则输出YES，若输入字符B（ASCII值是66），则输出NO。
// 输入:
//     输入一个字符。
// 输出:
//     如果其ASCII值为奇数，则输出YES，否则，输出NO。
// 样例输入:
//     A
// 样例输出:
//     YES

#include <iostream>

using namespace std;

int main()
{

    char a;

    cin >> a;

    if (int(a) % 2 == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}