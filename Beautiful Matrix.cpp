#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    for(int i=0;i<25;i++){
        int x;
        cin>>x;
        if(x==0)
            continue;
        int r=i/5;
        int c=i%5;
        cout<<abs(r-2)+abs(c-2);
        break;
    }
    return 0;
}