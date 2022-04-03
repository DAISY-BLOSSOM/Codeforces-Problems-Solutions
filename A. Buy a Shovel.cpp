// https://codeforces.com/contest/732/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    if(k%10==r || k%10==0) cout<<"1\n";
    else{
        for(int i=2; ; i++){
            if((i*k)%10 == r || (i*k)%10 == 0 ){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
