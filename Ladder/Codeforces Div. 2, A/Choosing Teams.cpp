#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    ll cnt=0;
    sort(vec.begin(), vec.end());
    for(int i=0;i<n-2;i+=3){
        ll maxi=max(vec[i], max(vec[i+1], vec[i+2]));
        if(maxi+k<=5){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}