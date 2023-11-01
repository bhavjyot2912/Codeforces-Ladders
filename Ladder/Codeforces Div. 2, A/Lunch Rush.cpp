#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, k;
    ll maxi=-1e9;
    cin>>n>>k;
    ll t=n;
    while(t--){
        ll f, t;
        cin>>f>>t;
        if(t>k)
            maxi=max(maxi, f-(t-k));
        else
            maxi=max(maxi, f);
    }
    cout<<maxi<<endl;


    return 0;
}