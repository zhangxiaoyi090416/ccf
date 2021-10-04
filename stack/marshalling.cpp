#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;
    int n, s = 1;

    freopen("marshalling.in", "r", stdin);
    freopen("marshalling.out", "w", stdout);

    cin >> n;
    while (n-- > 0)
    {
        int x;
        cin >> x;
        if (s > x)
        {
            st.pop();
        }
        else
        {
            for (; s <= x; s++)
            {
                st.push(s);
                cout << "A";
            }
        }
        cout << "B";
    }
    cout << endl;
    return 0;
}