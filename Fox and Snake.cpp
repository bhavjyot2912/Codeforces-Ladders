#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, m;
    cin>>n>>m;
    bool flag=true;
    vector<vector<char>> mat(n, vector<char>(m, '.'));
    for(int i=0;i<n;i+=2){
        for(int j=0;j<m;j++){
            mat[i][j]='#';
        }
    }
    for(int i=1;i<n;i+=2){
        if(flag){
            mat[i][m-1]='#';
            flag=false;
        }
        else{
            mat[i][0]='#';
            flag=true;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    return 0;
}