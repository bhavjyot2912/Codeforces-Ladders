#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a, b, c;
    cin>>a>>b>>c;
    ll ans=max(a+b+c, max((a*b)+c, max(a+(b*c), max(a*(b+c), max((a+b)*c, a*b*c)))));
    cout<<ans<<endl;
    return 0;
}