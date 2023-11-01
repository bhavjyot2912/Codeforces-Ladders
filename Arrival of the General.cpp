#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    ll rmin = 0, lmin = 0, rmax = 0, lmax = 0, min = vec[0], max = vec[0];
    for (int i = 1; i < n; i++)
    {
        if (vec[i] < min)
        {
            lmin = rmin = i;
            min = vec[i];
        }
        else if (vec[i] == min)
            rmin = i;

        if (vec[i] > max)
        {
            lmax = rmax = i;
            max = vec[i];
        }
        else if (vec[i] == min)
            rmax = i;
    }
    ll ans = (n - 1 - rmin) + (lmax);
    if (rmin < lmax)
        ans -= 1;
    cout << ans << endl;
    return 0;
}