#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, t1 = 0, t2 = 0, t3 = 0;
    cin >> n;
    // vector<pair<int, int>> vec;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // vec.push_back({x, i + 1});
        if (x == 1)
        {
            a[t1] = i + 1;
            t1++;
        }

        else if (x == 2)
        {
            b[t2] = i + 1;
            t2++;
        }
        else
        {
            c[t3] = i + 1;
            t3++;
        }
    }

    ll w = min(t1, min(t2, t3));
    cout << w << endl;
    for (int i = 0; i < w; i++)
    {
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }
    // if (w == 0)
    // {
    //     cout << w << endl;
    //     return 0;
    // }
    // else
    // {
    //     cout << w << endl;
    //     sort(vec.begin(), vec.end());
    //     for (int i = 0, j = t1, k = t1 + t2; i < t1, j < t1 + t2, k < t1 + t2 + t3; i++, j++, k++)
    //     {
    //         cout << vec[i].second << " " << vec[j].second << " " << vec[k].second << endl;
    //     }
    // }

    return 0;
}