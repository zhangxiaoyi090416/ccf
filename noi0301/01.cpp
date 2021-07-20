// 描述
//     在一个有180人的大班级中，存在两个人生日相同的概率非常大，现给出每个学生的名字，出生月日。试找出所有生日相同的学生。
// 输入
//     第一行为整数n，表示有n个学生，n ≤ 180。此后每行包含一个字符串和两个整数，分别表示学生的名字（名字第一个字母大写，
//     其余小写，不含空格，且长度小于20）和出生月(1 ≤ m ≤ 12)日(1 ≤ d ≤ 31)。名字、月、日之间用一个空格分隔
// 输出
//     每组生日相同的学生，输出一行，其中前两个数字表示月和日，后面跟着所有在当天出生的学生的名字，数字、名字之间都用一个空
//     格分隔。对所有的输出，要求按日期从前到后的顺序输出。对生日相同的名字，按名字从短到长按序输出，长度相同的按字典序输出。
//     如没有生日相同的学生，输出”None”
// 样例输入
//     6
//     Avril 3 2
//     Candy 4 5
//     Tim 3 2
//     Sufia 4 5
//     Lagrange 4 5
//     Bill 3 2
// 样例输出
//     3 2 Tim Bill Avril
//     4 5 Candy Sufia Lagrange

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student
{
    int month;
    int day;
    string name;
};

bool compare(student &a, student &b)
{
    if (a.month != b.month)
    {
        return a.month < b.month;
    }
    else if (a.day != b.day)
    {
        return a.day < b.day;
    }
    else if (a.name.size() != b.name.size())
    {
        return a.name.size() < b.name.size();
    }
    else
    {
        return a.name < b.name;
    }
}

void check(int m, int d, const vector<string> &names, bool &empty)
{
    if (names.size() > 1)
    {
        cout << m << " " << d << " ";
        for (auto name : names)
        {
            cout << name << " ";
        }
        cout << endl;
        empty = false;
    }
}

int main()
{
    int n;

    cin >> n;

    vector<student> students(n);

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].month >> students[i].day;
    }

    sort(students.begin(), students.end(), compare);

    int m = 0, d = 0;
    vector<string> names;
    bool empty = true;

    for (auto student : students)
    {
        if (student.month != m || student.day != d)
        {
            check(m, d, names, empty);

            m = student.month;
            d = student.day;
            names.clear();
            names.push_back(student.name);
        }
        else
        {
            names.push_back(student.name);
        }
    }
    check(m, d, names, empty);

    if (empty)
    {
        cout << "None" << endl;
    }

    return 0;
}