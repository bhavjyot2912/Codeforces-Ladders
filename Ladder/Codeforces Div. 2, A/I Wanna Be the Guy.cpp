#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    set<int> st;
    for(int i=0;i<2;i++){
        int p;
        cin>>p;
        for(int j=0;j<p;j++){
            int lvl;
            cin>>lvl;
            st.insert(lvl);
        }
    }
    if(st.size()==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
}