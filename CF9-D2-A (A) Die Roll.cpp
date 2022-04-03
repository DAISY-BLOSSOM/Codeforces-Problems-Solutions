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
    int y,w,chances,mx,a,b;
    cin>>y>>w;
    mx=max(y,w);
    chances=(6-mx)+1;
    int k=__gcd(chances,6);
	cout<<chances/k<<"/"<<6/k<<endl;


    return 0;
}
