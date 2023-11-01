#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m;
    cin>>n>>m;
    if(n<m && n%2==0)
        cout<<"Malvika"<<endl;
    else if(n==m && n%2==0)
        cout<<"Malvika"<<endl;
    else if(m<n && m%2==0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;

    return 0;
}