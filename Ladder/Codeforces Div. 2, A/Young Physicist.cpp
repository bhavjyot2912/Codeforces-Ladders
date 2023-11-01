#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<ll> x(3*n);
    for(int i=0;i<3*n;i++){
        cin>>x[i];
    }
    ll sumx=0, sumy=0, sumz=0;
    for(int i=0;i<x.size()-2;i+=3){
        sumx+=x[i];
        sumy+=x[i+1];
        sumz+=x[i+2];
    }
    if(sumx!=0 || sumy!=0 || sumz!=0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}