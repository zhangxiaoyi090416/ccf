// 画矩形【1.5编程基础之循环控制37】
//     根据参数，画出矩形。输入四个参数：前两个参数为整数，依次代表矩形的高和宽（高不少于3行不多于10行，宽不少于5列不多于10列）；
//     第三个参数是一个字符，表示用来画图的矩形符号；第四个参数为1或0，0代表空心，1代表实心。
// 输入:
//     输入一行，包括四个参数：前两个参数为整数，依次代表矩形的高和宽（高不少于3行不多于10行，宽不少于5列不多于10列）；
//     第三个参数是一个字符，表示用来画图的矩形符号；第四个参数为1或0，0代表空心，1代表实心。
// 输出:
//     输出画出的图形。
// 样例输入
//     7 7 @ 0
// 样例输出
//     @@@@@@@
//     @     @
//     @     @
//     @     @
//     @     @
//     @     @
//     @@@@@@@

#include <iostream>

using namespace std;

int main()
{
    int h, w, f;
    char p;
    cin >> h >> w >> p >> f;
    if (f == 1)
    {
        for (int i = 0; i < h; i++)
        {
            for (int z = 0; z < w; z++)
            {
                cout << p;
            }
            cout << endl;
        }
    }
    else if (f == 0)
    {
        for (int z = 0; z < w; z++)
        {
            cout << p;
        }
        cout << endl;
        for (int i = 0; i < h - 2; i++)
        {
            cout << p;
            for (int s = 0; s < w - 2; s++)
            {
                cout << ' ';
            }
            cout << p << endl;
        }
        for (int z = 0; z < w; z++)
        {
            cout << p;
        }
        cout << endl;
    }
}