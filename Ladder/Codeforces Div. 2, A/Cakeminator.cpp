#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll r, c, ans = 0, yes = 0;
    cin >> r >> c;
    string str[r];
    bool flag = true;
    for (int i = 0; i < r; i++)
    {
        cin >> str[i];
    }

    for (int i = 0; i < r; i++)
    {
        if (str[i].find('S') != -1)
        {
            flag = false;
        }
        if (flag)
        {
            ans += c;
            yes++;
        }
        flag = true;
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (str[j][i] == 'S')
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans += r-yes;
        }
        flag=true;
    }
    cout<<ans<<endl;
    return 0;
}