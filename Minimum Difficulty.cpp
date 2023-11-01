#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<ll> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    ll maxi=0;
    for(int i=1;i<n;i++){
        maxi=max(maxi, vec[i]-vec[i-1]);
    }
    ll mini=1000;
    for(int i=1;i<n-1;i++){
        mini=min(mini, vec[i+1]-vec[i-1]);
    }
    cout<<max(mini, maxi)<<endl;
    return 0;
}
