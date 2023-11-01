#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int a, b;
    cin>>a>>b;
    int wina=0, winb=0, draw=0;
    for(int i=1;i<=6;i++){
        if(abs(i-a)<abs(i-b))
            wina++;
        else if(abs(i-b)<abs(i-a))
            winb++;
        else
            draw++;
    }
    cout<<wina<<" "<<draw<<" "<<winb<<endl;

    return 0;
}