#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str;
    cin>>str;
    int x;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(ll i=0;i<str.length();i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y'){
            cout<<"."<<str[i];
        }
    }

    return 0;
}