#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(str.length()<=10){
            cout<<str<<endl;
            continue;
        }
        string ans="";
        ll len=str.length();
        ans=ans+str[0]+to_string(len-2)+str[len-1];
        cout<<ans<<endl;
    }
    return 0;
}