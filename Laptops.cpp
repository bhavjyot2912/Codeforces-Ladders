#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<pair<int, int>> vec;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        vec.push_back({a, b});
    }
    sort(vec.begin(), vec.end());
    bool flag=false;
    for(int i=0;i<n-1;i++){
        if(vec[i].second>vec[i+1].second){
            flag=true;
        }
    }
    if(flag)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;

    return 0;
}