// https://codeforces.com/contest/265/problem/A

#include <bits/stdc++.h>

using namespace std;
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
    fast();
    string s,t;
    int position=0;
    cin>>s>>t;
    for(int i=0,j=0; i<t.length(); i++)
    {
        if(t[i]==s[j])
        {
            j++;
            position=j;
        }
    }

    cout<<position+1;
    return 0;
}
