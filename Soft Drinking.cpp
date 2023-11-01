#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ll totML=(k*l)/nl;
    ll totSlice=c*d;
    ll totSalt=p/np;
    ll toast=(min(totML, min(totSalt, totSlice)))/n;
    cout<<toast<<endl;


    return 0;
}