#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<pair<ll, ll>> vec;
    for(ll i=0;i<n;i++){
        ll h, a;
        cin>>h>>a;
        vec.push_back(make_pair(h, a));
    }
    ll cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            if(vec[i].first==vec[j].second)
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}