#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, d, sum=0, jokes=0;
    cin>>n>>d;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        sum+=(vec[i]+10);
        jokes+=2;
    }
    sum-=10;
    jokes-=2;
    if(sum>d)
        jokes=-1;
    else{
        int timeLeft=d-sum;
        jokes+=timeLeft/5;
    }
    cout<<jokes<<endl;
    return 0;
    
}