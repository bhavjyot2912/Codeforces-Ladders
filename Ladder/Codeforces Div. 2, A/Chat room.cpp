#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(string s, string t, int i, int j){
    if(j==0)
        return true;
    if(i==0)
        return false;

    if(s[i-1]==t[j-1])
        return solve(s, t, i-1, j-1);
    return solve(s, t, i-1, j);
}

int main(){
    string s;
    cin>>s;
    string t="hello";
   
    if(solve(s, t, s.length(), t.length()))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;

}