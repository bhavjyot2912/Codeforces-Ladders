#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool RemoveSpaces(char l, char r){
    return (l==r)&&(l==' ');
}

int main(){
    string str;
    cin>>str;
    
    ll idx=str.find("WUB");
    while(idx!=-1){
        str=str.replace(idx, 3, " ");
        idx=str.find("WUB");
    }
    auto end=unique(str.begin(), str.end(), RemoveSpaces);
    str.erase(end, str.end());
    cout<<str<<endl;
    return 0;
}