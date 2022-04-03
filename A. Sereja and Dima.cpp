// https://codeforces.com/contest/381/problem/A

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
    int n,s1=0,s2=0,temp,mx=0;
    cin>>n;
    deque<int> dq;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        dq.push_back(temp);
    }
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(dq.back() >= dq.front())
            {
                mx=dq.back();
                s1+=mx;
                dq.pop_back();
            }
            else
            {
                mx=dq.front();
                s1+=mx;
                dq.pop_front();
            }
        }
        else
        {
            if(dq.back() >= dq.front())
            {
                mx=dq.back();
                s2+=mx;
                dq.pop_back();
            }
            else
            {
                mx=dq.front();
                s2+=mx;
                dq.pop_front();
            }
        }
    }
 
    cout<<s1<<" "<<s2;
    return 0;
}
