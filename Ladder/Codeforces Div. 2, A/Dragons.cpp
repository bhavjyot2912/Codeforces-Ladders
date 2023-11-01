#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int s, n;
    cin>>s>>n;
    vector<pair<int, int>> vec;
    for(int i=0;i<n;i++){
        int str, bon;
        cin>>str>>bon;
        vec.push_back({str, bon});
    }
    sort(vec.begin(), vec.end());
    for(int i=0;i<n;i++){
        if(s<=vec[i].first){
            cout<<"NO"<<endl;
            return 0;
        }
        s+=vec[i].second;
    }
    cout<<"YES"<<endl;
    return 0;
}