#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n, ll m, ll a, ll b, vector<int>& dp)
{
    if (n == 0)
        return 0;
    if(n<=m)
        return min(a*n, b);

    if(dp[n]!=-1)
        return dp[n];

    
    ll single = a + solve(n - 1, m, a, b, dp);
    ll group = b + solve(n - m, m, a, b, dp);

    return dp[n]=min(single, group);
}

int main()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    vector<int> dp(n+1, -1);
    ll ans = solve(n, m, a, b, dp);
    cout << ans << endl;
    return 0;
}