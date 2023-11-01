#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    set<char> st;
    for (int i = 1; i < n - 1;)
    {
        st.insert(str[i]);
        i += 3;
    }
    cout << st.size();
    return 0;
}