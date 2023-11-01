#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, v;
    cin>>n>>v;
    vector<int> ans;
    for(int i=0;i<n;i++){
        ll k;
        cin>>k;
        vector<int> prices(k);
        for(int i=0;i<k;i++){
            cin>>prices[i];
        }
        sort(prices.begin(), prices.end());
        if(v>prices[0])
            ans.push_back(i+1);
    }
    cout<<ans.size()<<endl;
    for(int a:ans){
        cout<<a<<" ";
    }
    return 0;
}