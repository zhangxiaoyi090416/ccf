#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    stack<int> dirty;
    stack<int> washed;
    stack<int> dried;

    freopen("dishes.in", "r", stdin);
    freopen("dishes.out", "w", stdout);

    cin >> n;
    for (int i = n - 1; i >= 0; i--)
    {
        dirty.push(i + 1);
    }

    while (dried.size() < n)
    {
        int kind, num;

        cin >> kind >> num;

        if (kind == 1)
            for (int i = 0; i < num; i++)
            {
                washed.push(dirty.top());
                dirty.pop();
            }
        else if (kind == 2)
            for (int i = 0; i < num; i++)
            {
                dried.push(washed.top());
                washed.pop();
            }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dried.top();
        dried.pop();
    }
    return 0;
}