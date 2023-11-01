#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<ll> vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<ll> ans(n);
    for(int i=0;i<n;i++){
        ans[vec[i]-1]=i+1;
    }
    for(auto itr:ans)
        cout<<itr<<" ";

    return 0;
}