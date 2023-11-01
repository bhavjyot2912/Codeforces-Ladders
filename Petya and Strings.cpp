#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s, t;
    cin>>s>>t;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    if(s<t)
        cout<<"-1"<<endl;
    else if(t<s)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;

    return 0;
}