// https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>
#define ll long long int
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    map<string,int> mp;
    string s;
    int t,it;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(mp.find(s) != mp.end())
        {
            it=mp[s]++;
            cout<<s<<it<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
            mp.insert ( std::pair<string,int>(s,1) );
        }
    }
    return 0;
}
