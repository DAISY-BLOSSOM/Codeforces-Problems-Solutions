//https://codeforces.com/contest/228/problem/A
#include <bits/stdc++.h>

using namespace std;
void fast(){
ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}
int main()
{
    fast();

    int a[4] , c=0;
    for(int i=0;i<4;i++)   cin>>a[i];
    sort(a,a+4);
    for(int i=0;i<4;i++){
        if(a[i]==a[i+1]) c++;
    }
    cout<<c<<endl;
    return 0;
}
