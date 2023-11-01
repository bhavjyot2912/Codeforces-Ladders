#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str;
    cin>>str;
    vector<int> vec;
    for(char ch:str){
        if(ch!='+'){
            int digit=ch-'0';
            vec.push_back(digit);
        }
    }
    sort(vec.begin(), vec.end());
    string ans="";
    for(auto itr:vec){
        ans+=to_string(itr)+"+";
    }
    ans.pop_back();
    cout<<ans<<endl;
    return 0;

}