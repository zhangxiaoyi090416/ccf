// 密码翻译【1.7编程基础之字符串08】
//     在情报传递过程中，为了防止情报被截获，往往需要对情报用一定的方式加密，简单的加密算法虽然不足以完全避免情报被破译，
//     但仍然能防止情报被轻易的识别。我们给出一种最简的的加密方法，对给定的一个字符串，把其中从a-y，A-Y的字母用其后继字母
//     替代，把z和Z用a和A替代，其他非字母字符不变，则可得到一个简单的加密字符串。
// 输入：
//     输入一行，包含一个字符串，长度小于80个字符。
// 输出：
//     输出每行字符串的加密字符串。
// 样例输入:
//     Hello! How are you!
// 样例输出:
//     Ifmmp! Ipx bsf zpv!
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    char a[80];
    cin.getline(a, 80);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'y' || a[i] >= 'A' && a[i] <= 'Y')
        {
            cout << char(a[i] + 1);
        }
        else if (a[i] == 'z')
        {
            cout << 'a';
        }
        else if (a[i] == 'Z')
        {
            cout << 'A';
        }
        else
        {
            cout << a[i];
        }
    }
    cout << endl;
    return 0;
}