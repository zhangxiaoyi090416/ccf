// 描述
//     有两个变量a和b，在执行了如下代码后：
//     a = 1.000000001;
//     b = a;
//     printf("%.9f %.9f\n", a, b);
//     输出两个数：1.000000001 1.000000000
//     请问a和b分别是以下哪种类型？
//     A. bool   B. char   C. short   D. int   E. float   F. double
// 输入
//     无。
// 输出
//     一行，包含两个大写字母，分别代表变量a和b的类型标号。中间用一个空格隔开。
// 样例输入
//     无
// 样例输出
//     A B
// 仅作格式示例，非正确答案
#include <iostream>

using namespace std;

int main()
{
    // double a = 1.000000001;
    // float b = a;
    // printf("%.9f %.9f\n", a, b);

    cout << "F"
         << " "
         << "E" << endl;

    return 0;
}