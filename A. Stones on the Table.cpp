// https://codeforces.com/contest/266/problem/A

#include <bits/stdc++.h>
#define ll long long int
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int n,counter=0; cin>>n;
    string s; cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1])
        {
            counter++;
        }
    }

    cout<<counter<<endl;
    return 0;
}
