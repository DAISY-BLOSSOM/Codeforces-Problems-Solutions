// https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>
#define ll long long int
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    char c; int ctr=0;
    set<char> st;
    while(c!='}'){
        cin>>c;
        if(c!='{'&&c!=','&&c!='}'){
            st.insert(c);
        }
    }
    cout<<st.size();
    return 0;
}
