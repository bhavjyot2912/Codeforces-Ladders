#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string str;
    cin >> str;
    string str1 = str;
    if (str[0] != '-'){
        cout << stoi(str) << endl;
        return 0;
    }

    int n = str.size();
    str.erase(str.begin() + (n - 1));
    str1.erase(str1.begin() + (n - 2));
    if (stoi(str1) > stoi(str))
        cout << stoi(str1) << endl;
    else
        cout << stoi(str) << endl;

    return 0;
}