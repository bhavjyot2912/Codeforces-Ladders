#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<vector<char>> mat(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    ll cnt;
    int delrow[4] = {-1, 0, 1, 0};
    int delcol[4] = {0, 1, 0, -1};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cnt = 0;

            for (int k = 0; k < 4; k++)
            {
                int nrow = i + delrow[k];
                int ncol = j + delcol[k];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && mat[nrow][ncol] == 'o')
                    cnt++;
            }
            if (cnt % 2 == 1)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}