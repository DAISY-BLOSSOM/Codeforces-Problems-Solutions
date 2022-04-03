https://codeforces.com/contest/1660/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
   long long t,a,b,s;
   cin>>t;
   while(t--){
       cin>>a>>b;
       if(a==0){
           cout<<"1"<<endl;
       }
       else if(b==0){
           cout<<a+1<<endl;
       }
       else{
           cout<<(a+(b*2)+1)<<endl;
       }
   }
}
