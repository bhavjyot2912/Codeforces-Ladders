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
    sort(vec.begin(), vec.end());
    vector<ll> prefix(n+1);
    prefix[0]=0;
    prefix[1]=vec[0];
    for(int i=1;i<n;i++){
        prefix[i+1]=prefix[i]+vec[i];
    }
    // for(auto itr:prefix)
    //     cout<<itr<<" ";
    ll ans=0, sum=0;
    for(int i=n;i>=1;i--){
        ans++;
        sum+=vec[i-1];
        if(sum>prefix[i-1]){
            cout<<ans<<endl;
            break;
        }
    }
    return 0;
}