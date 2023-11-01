#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<pair<int, int>> even, odd;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){
            even.push_back({x, i+1});
        }
        else{
            odd.push_back({x, i+1});
        }
    }
    ll ans;
    if(even.size()==1)
        ans=even[0].second;
    if(odd.size()==1)
        ans=odd[0].second;

    cout<<ans<<endl;
    return 0;
}