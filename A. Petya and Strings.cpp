//https://codeforces.com/contest/112/problem/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
         if ( s1[i] >= 65 && s1[i] <= 90)  {
             s1[i] =s1[i]+ 32;
         }
        if ( s2[i] >= 65 && s2[i] <= 90)  {
             s2[i] =  s2[i]+ 32;
         }
        
    }
    int res = s1.compare(s2);
    if(res>0) cout<<"1";
    else if (res<0) cout<<"-1";
    else if (res==0)  cout<<"0";
}
