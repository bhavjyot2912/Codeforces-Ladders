#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;
    ll ans=0;
    if (n < m)
        ans=-1;
    

    else{
        if(n%2==0)
            ans=n/2;
        
        else
            ans=(n/2)+1;
        
        while(ans%m!=0)
            ans++;
    }
    cout<<ans;

    return 0;
}