#include <bits/stdc++.h>
using namespace std;
#define V(a, x, n, m) vector<vector<x>> a(n, vector<x>(m))
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        V(a, int, n, n);
        for (auto &x : a)
            for (int &y : x)
                cin >> y;
        vector<int> is(n);
        for (int i = 0, id = 1; i < n; i++)
            if (!is[i] && a[i][i] == 1)
            {
                for (int j = 0; j < n; j++)
                    if (a[i][j] && !is[j])
                        is[j] = (id)*a[i][j];
                id++;
            }
        bool ans = 1;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                if (!a[i][j])
                {
                    if (is[i] != 0 && abs(is[i]) == abs(is[j]))
                        ans = 0;
                }
                else if (is[i] != a[i][j] * is[j])
                {
                    ans = 0;
                }
            }
        if (!ans)
        {
            cout << "-1\n";
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (abs(is[i]) - 1 == j)
                    cout << -(is[i] / abs(is[i])) << ' ';
                else
                    cout << "0 ";
            }
            cout << '\n';
        }
    }
}