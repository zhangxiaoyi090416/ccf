// 描述
//     利用动态链表记录从标准输入输入的学生信息（学号、姓名、性别、年龄、得分、地址）
//     其中,学号长度不超过20, 姓名长度不超过40, 性别长度为1, 地址长度不超过40
// 输入
//     包括若干行，每一行都是一个学生的信息，如：
//     00630018 zhouyan m 20 10.0 28#460
//     输入的最后以"end"结束
// 输出
//     将输入的内容倒序输出
//     每行一条记录，按照
//     学号 姓名 性别 年龄 得分 地址
//     的格式输出
// 样例输入
//     00630018 zhouyan m 20 10 28#4600
//     0063001 zhouyn f 21 100 28#460000
//     0063008 zhoyan f 20 1000 28#460000
//     0063018 zhouan m 21 10000 28#4600000
//     00613018 zhuyan m 20 100 28#4600
//     00160018 zouyan f 21 100 28#4600
//     01030018 houyan m 20 10 28#4600
//     0630018 zuyan m 21 100 28#4600
//     10630018 zouan m 20 10 28#46000
//     end
// 样例输出
//     10630018 zouan m 20 10 28#46000
//     0630018 zuyan m 21 100 28#4600
//     01030018 houyan m 20 10 28#4600
//     00160018 zouyan f 21 100 28#4600
//     00613018 zhuyan m 20 100 28#4600
//     0063018 zhouan m 21 10000 28#4600000
//     0063008 zhoyan f 20 1000 28#460000
//     0063001 zhouyn f 21 100 28#460000
//     00630018 zhouyan m 20 10 28#4600

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string> students;

    while (true)
    {
        string value;

        getline(cin, value);
        if (value == "end")
            break;

        students.push_front(value);
    }

    for (auto s : students)
    {
        cout << s << endl;
    }

    return 0;
}